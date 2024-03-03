#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x2F8 - 0x260)
// WidgetBlueprintGeneratedClass WB_LoadGameSlot.WB_LoadGameSlot_C
class UWB_LoadGameSlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                               Border_0;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_0;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            OldSave;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_0;                                       // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_2;                                       // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_4;                                       // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FS_SaveSlotDetails                    SaveSlotData;                                      // 0x298(0x58)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class UWB_LoadGameWindow_C*                  LoadGame_Window_Ref;                               // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_LoadGameSlot_C* GetDefaultObj();

	class FText Get_OldSave_Text_0(bool CallFunc_EqualEqual_StrStr_ReturnValue, float CallFunc_Conv_StringToFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	class FText Get_Quest_Name(class FText CallFunc_Conv_StringToText_ReturnValue);
	void Set_Border_Color(const struct FLinearColor& InBrushColor);
	class FText Get_Save_Type(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	class FText Get_Date(class FText CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_WB_LoadGameSlot(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, class UTexture2D* CallFunc_ImportFileAsTexture2D_ReturnValue);
};

}


