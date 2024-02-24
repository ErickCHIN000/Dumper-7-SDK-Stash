#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x398 - 0x370)
// WidgetBlueprintGeneratedClass WBP_HelperBondPuzzleSolved.WBP_HelperBondPuzzleSolved_C
class UWBP_HelperBondPuzzleSolved_C : public UNotificationWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_StyledButton_C*                   Disband;                                           // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StyledButton_C*                   Thank;                                             // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NotificationHeader_C*             WBP_NotificationHeader;                            // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_SophiaHUD_C*                       HUD;                                               // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_HelperBondPuzzleSolved_C* GetDefaultObj();

	void BndEvt__WBP_HelperBondPuzzleSolved_WBP_StyledButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature();
	void Construct();
	void BndEvt__WBP_HelperBondPuzzleSolved_Thank_K2Node_ComponentBoundEvent_2_Pressed__DelegateSignature();
	void DisbandHelperBond();
	void ExecuteUbergraph_WBP_HelperBondPuzzleSolved(int32 EntryPoint);
};

}


