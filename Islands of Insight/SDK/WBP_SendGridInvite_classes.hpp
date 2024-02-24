#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x388 - 0x350)
// WidgetBlueprintGeneratedClass WBP_SendGridInvite.WBP_SendGridInvite_C
class UWBP_SendGridInvite_C : public UGridInviteWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_GridButton_C*                     CloseBtn;                                          // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PartyPanel;                                        // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Space;                                             // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Space_1;                                           // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Space_2;                                           // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RevampedGameHUD_C*                NewVar_0;                                          // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_SendGridInvite_C* GetDefaultObj();

	void BndEvt__WBP_SendGridInvite_WBP_GridButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void CloseAndShowMessage(class FText& Message);
	void Construct();
	void ExecuteUbergraph_WBP_SendGridInvite(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, class ASophiaPlayerState* K2Node_DynamicCast_AsSophia_Player_State, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_InParty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText K2Node_CustomEvent_Message, class UWBP_RevampedGameHUD_C* K2Node_DynamicCast_AsWBP_Revamped_Game_HUD, bool K2Node_DynamicCast_bSuccess_1);
};

}


