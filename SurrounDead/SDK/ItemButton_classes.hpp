#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2F0 - 0x2C0)
// WidgetBlueprintGeneratedClass ItemButton.ItemButton_C
class UItemButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_41;                                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_31;                                      // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  ItemId;                                            // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        MaxStack;                                          // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class E_DataTableType                   DTRef;                                             // 0x2E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_8F9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDebugMenu_C*                          DebugMenu;                                         // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UItemButton_C* GetDefaultObj();

	class FText GetText(class FText CallFunc_Conv_NameToText_ReturnValue);
	void BndEvt__ItemButton_Button_41_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_ItemButton(int32 EntryPoint, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class IBP_JigMPComponentInterface_C> K2Node_DynamicCast_AsBP_Jig_MPComponent_Interface, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Clamp_ReturnValue, const struct FRepItemInfo& K2Node_MakeStruct_RepItemInfo, class AActor* CallFunc_JigMP_OnRequestDropItem_ActorRef, TScriptInterface<class IBP_MpInteractInterface_C> K2Node_DynamicCast_AsBP_Mp_Interact_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_SetPickupCount_Result, double CallFunc_Round_A_ImplicitCast);
};

}


