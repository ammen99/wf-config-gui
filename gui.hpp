class wf_gui
{
    load config file and list of plugins
    std::vector<wf_gui_section*> sections
}


class wf_gui_section
{
    GtkTab/Whatever* create();
};

subclasses:
wf_output_config_section // for output config
wf_command_section // for command plugin
wf_plugin_section // for regular plugins

wf_plugin_section()
{
    wf_plugin_section (wayfire_config_section*, xml_file)
}

wf_plugin_gui_option : public GtkHBox / whatever
{
    wf_plugin_gui_option(xml::gui_option opt)

    label (name)
    type-dependent setter
    description, default value
}

subclasses:
wf_plugin_gui_int_opt
wf_plugin_gui_key_opt
...
