//FunctionName: charTowchar_t

wchar_t* charTowchar_t(const char* cstr)
{
    wchar_t* wstr;
	size_t len =strlen(cstr)+1;
	size_t converted=0;
	wstr=(wchar_t*)malloc(len*sizeof(wchar_t));
	mbstowcs_s(&converted,wstr,len,cstr,_TRUNCATE);
	return wstr;
}
