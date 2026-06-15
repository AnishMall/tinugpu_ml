#!/usr/bin/env gw_sh

if {![info exists ::env(GOWIN_PART_NUMBER)]} {
  error "Set GOWIN_PART_NUMBER to the exact installed Tang Mega 60K part/speed-grade identifier"
}

set script_dir [file dirname [file normalize [info script]]]
set repo_dir [file normalize "$script_dir/../.."]
set project_name tinygpu_4x4x16_conv
if {[info exists ::env(TINYGPU_PROJECT_NAME)]} {
  set project_name $::env(TINYGPU_PROJECT_NAME)
}

create_project -name $project_name -dir $script_dir/build \
  -pn $::env(GOWIN_PART_NUMBER) -force

set rtl_dir "$repo_dir/rtl"
set fd [open "$rtl_dir/files.f" r]
while {[gets $fd file_name] >= 0} {
  if {$file_name ne ""} {
    import_files -file "$rtl_dir/$file_name"
  }
}
close $fd
import_files -file "$script_dir/tinygpu_50mhz.sdc"

set_option -top_module tinygpu_top
set_option -synthesis_tool gowinsynthesis
set_option -verilog_std sysv2017
set_option -include_path $rtl_dir
set_option -print_all_synthesis_warning 1
set_option -output_base_name $project_name

puts "Created $project_name for $::env(GOWIN_PART_NUMBER) at 50 MHz"
