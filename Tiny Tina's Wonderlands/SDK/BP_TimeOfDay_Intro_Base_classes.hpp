#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB4 (0x5C0 - 0x50C)
// BlueprintGeneratedClass BP_TimeOfDay_Intro_Base.BP_TimeOfDay_Intro_Base_C
class ABP_TimeOfDay_Intro_Base_C : public ABP_TimeOfDay_Base_C
{
public:
	uint8                                        Pad_3E53[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x510(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  SkyBackground;                                     // 0x518(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SiegeClouds;                                       // 0x520(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Elpis_DMI;                                         // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayUntilTransitionInIntro;                       // 0x530(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E69[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PreStorm;                                          // 0x538(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                DuringStorm;                                       // 0x548(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                PostStorm;                                         // 0x558(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                ButtstallionLayer;                                 // 0x568(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                PostStormTransition;                               // 0x578(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                PreStormTransition;                                // 0x588(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        TransitionDuration_PreSiege;                       // 0x598(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TransitionDuration_DuringSiege;                    // 0x59C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TransitionDuration_PostSiege;                      // 0x5A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KeyTime_TransitionStart_Forming;                   // 0x5A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KeyTime_TransitionStart_Clearing;                  // 0x5A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E87[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SiegeLayerName;                                    // 0x5B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_TimeOfDay_Intro_Base_C* GetDefaultObj();

	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, const struct FRotator& CallFunc_MakeRotator_ReturnValue);
	void SiegeClearStart();
	void SiegeClearEnd();
	void PostSiege(bool OnLoad);
	void SiegeFormStart();
	void SiegeFormEnd();
	void DuringSiege(bool OnLoad);
	void PreSiege(bool OnLoad);
	void ReceiveBeginPlay();
	void ButtstallionCutscene(bool OnLoad);
	void AfterButtstallionCutscene(bool OnLoad);
	void ExecuteUbergraph_BP_TimeOfDay_Intro_Base(int32 EntryPoint, bool K2Node_CustomEvent_OnLoad4, bool K2Node_CustomEvent_OnLoad3, bool K2Node_CustomEvent_OnLoad2, bool K2Node_CustomEvent_OnLoad1, bool K2Node_CustomEvent_OnLoad);
};

}


