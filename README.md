This demo shows a way to reproduce a potentional bug in the MSVC compiler with modules

exporting a struct with an overloaded operator>> can not be consumed in the file that imports the module.

Error	C2679	binary '>>': no operator found which takes a right-hand operand of type 'Test' (or there is no acceptable conversion)
