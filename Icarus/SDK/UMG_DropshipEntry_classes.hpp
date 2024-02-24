#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x149 (0x3A9 - 0x260)
// WidgetBlueprintGeneratedClass UMG_DropshipEntry.UMG_DropshipEntry_C
class UUMG_DropshipEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_DropshipPartSmall_C*              bot;                                               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Content;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DropshipName;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ImageButton;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               InUse;                                             // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_DropshipPartSmall_C*              Mid;                                               // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               NameBorder;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_DropshipPartSmall_C*              Top;                                               // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ButtonIcon_C*                     UMG_ButtonIcon;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            DropshipSelected;                                  // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        Index;                                             // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_53AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDropship                             Dropship;                                          // 0x2C8(0xE0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsSelected;                                        // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_DropshipEntry_C* GetDefaultObj();

	void SetSelected(bool Selected, const struct FButtonStyle& Style, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void SetDropship(const struct FDropship& Dropship, bool Valid, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FItemData& CallFunc_ConvertToItem_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FItemData& CallFunc_ConvertToItem_ReturnValue_1, const struct FItemData& CallFunc_ConvertToItem_ReturnValue_2);
	void Construct();
	void BndEvt__UMG_ButtonIcon_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
	void ExecuteUbergraph_UMG_DropshipEntry(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent, bool CallFunc_GetBackendProxyComponent_bSuccess);
	void DropshipSelected__DelegateSignature(int32 Index);
};

}


