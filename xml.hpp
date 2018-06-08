struct xml_option
{
    string name, default_value, description, type;
    others?
}

vector<xml_option> xml_options_from_file(file);

struct gui_option
{
    xml_option xml;
    wf_option from_file;

    set_value()
    get_value()
    get_type()
}

