// �����Ϳ������á������ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CDownBars0 ��װ��

class CDownBars0 : public COleDispatchDriver
{
public:
	CDownBars0(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CDownBars0(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CDownBars0(const CDownBars0& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IDownBars ����
public:
	STDMETHOD(get_Application)(Application * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get_Creator)(XlCreator * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get_Parent)(LPDISPATCH * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get_Name)(BSTR * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PBSTR ;
		InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(Select)(VARIANT * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PVARIANT ;
		InvokeHelper(0xeb, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get_Border)(Border * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0x80, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(Delete)(VARIANT * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PVARIANT ;
		InvokeHelper(0x75, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get_Interior)(Interior * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0x81, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get_Fill)(ChartFillFormat * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0x67f, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get_Format)(ChartFormat * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0x74, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}

	// IDownBars ����
public:

};