#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x4B0 - 0x488)
// BlueprintGeneratedClass MenuMap_P.MenuMap_P_C
class AMenuMap_P_C : public AOakLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x488(0x8)(Transient, DuplicateTransient)
	float                                        FadeDownBlackScreen_Opacity_5D4607A647F30510A7300FA9206460B9; // 0x490(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FadeDownBlackScreen__Direction_5D4607A647F30510A7300FA9206460B9; // 0x494(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FadeDownBlackScreen;                               // 0x498(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMenuMapMenuFlow*                      MenuMapMenuFlow_1_ExecuteUbergraph_MenuMap_P_RefProperty; // 0x4A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStaticMeshActor*                      BlackHoldingScreen_ExecuteUbergraph_MenuMap_P_RefProperty; // 0x4A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMenuMap_P_C* GetDefaultObj();

	void FadeDownBlackScreen__FinishedFunc();
	void FadeDownBlackScreen__UpdateFunc();
	void BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_0_MenuMapMenuFlowDelegate__DelegateSignature();
	void ReceiveBeginPlay();
	void BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_1_MainMenuViewpointChangedDelegate__DelegateSignature(enum class EMainMenuViewpointType MenuTransition);
	void ExecuteUbergraph_MenuMap_P(int32 EntryPoint, enum class EInitialPlayerStatus CallFunc_Start_OutInitialPlayerStatus, bool K2Node_SwitchEnum_CmpSuccess, enum class EMainMenuViewpointType K2Node_ActorBoundEvent_MenuTransition, bool K2Node_SwitchEnum1_CmpSuccess);
};

}


