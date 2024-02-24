#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x54 (0x2F8 - 0x2A4)
// WidgetBlueprintGeneratedClass W_ProjectionInterface_Spectator.W_ProjectionInterface_Spectator_C
class UW_ProjectionInterface_Spectator_C : public UW_ProjectionInterface_C
{
public:
	uint8                                        Pad_3A4A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<TSoftClassPtr<class UHuntingWidget>>    ApporvedWidgets;                                   // 0x2A8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_ProjectionInterface_Spectator_C* GetDefaultObj();

	bool ProjectionApproved(class UBP_UIProjectionComponent_C* Component, bool CallFunc_Set_Contains_ReturnValue);
};

}


