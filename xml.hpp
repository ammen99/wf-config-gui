/* represents an option from the xml file */
struct xml_option
{
    string name, default_value, description, type;
    // maybe others?
}

vector<xml_option> xml_options_from_file(file);

/* the place to combine the information from the config and the xml file */
struct gui_option
{
    xml_option xml;
    wf_option from_file;

    set_value()
    get_value()
    get_type()
}

