#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x241 - 0x230)
// WidgetBlueprintGeneratedClass WarningIcon.WarningIcon_C
class UWarningIcon_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_0;                                           // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bBlinking;                                         // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWarningIcon_C* GetDefaultObj();

	void Hide();
	void Show();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WarningIcon(int32 EntryPoint, bool CallFunc_IsVisible_ReturnValue, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_Tan_ReturnValue, float CallFunc_Abs_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FLinearColor& K2Node_Select_Default);
};

}


