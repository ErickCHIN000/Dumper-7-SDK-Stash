#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x380 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ProspectTracker_SettleState.UMG_ProspectTracker_SettleState_C
class UUMG_ProspectTracker_SettleState_C : public UUserWidget
{
public:
	class UBorder*                               SettleBorder;                                      // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           SettleMaterial;                                    // 0x268(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Settled;                                           // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1A75[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           UnSettledMaterial;                                 // 0x2F8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUMG_ProspectTracker_SettleState_C* GetDefaultObj();

	struct FSlateBrush SettleStateChange();
};

}


