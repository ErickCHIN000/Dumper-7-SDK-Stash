#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_WidgetStyle_Button.BPI_WidgetStyle_Button_C
class IBPI_WidgetStyle_Button_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_WidgetStyle_Button_C* GetDefaultObj();

	void RetrieveButtonStyle(struct FS_WidgetStyle_Button* ButtonStyleStruct);
};

}


