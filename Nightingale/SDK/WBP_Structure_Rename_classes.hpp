#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x4E0 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_Structure_Rename.WBP_Structure_Rename_C
class UWBP_Structure_Rename_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_button_base_C*                    button_Apply;                                      // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    Button_Close;                                      // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNWXEditableText*                      NWXEditableText_110;                               // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               TargetStructure;                                   // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Structure_Rename_C* GetDefaultObj();

	struct FEventReply OnInputCancel(const struct FEventReply& CallFunc_Handled_ReturnValue);
	class UWidget* GetDefaultFocusWidget();
	void Construct();
	void BndEvt__WBP_Structure_Rename_WBP_button_base_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature();
	void BndEvt__WBP_Structure_Rename_WBP_button_base_54_K2Node_ComponentBoundEvent_1_BU_Click__DelegateSignature();
	void ExecuteUbergraph_WBP_Structure_Rename(int32 EntryPoint, class ABP_Structure_Constructed_C* K2Node_DynamicCast_AsBP_Structure_Constructed, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetCustomizedPlayerName_OutName, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class ABP_Structure_Constructed_C* K2Node_DynamicCast_AsBP_Structure_Constructed_1, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IControllerInteractionInterface> CallFunc_GetLastNearbyInteractableObject_self_CastInput, class UObject* CallFunc_GetLastNearbyInteractableObject_ReturnValue, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_3, const class FString& CallFunc_GetPersistentUniqueId_ReturnValue);
};

}


