#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x7A0 - 0x798)
// BlueprintGeneratedClass BP_WaterBarrel.BP_WaterBarrel_C
class ABP_WaterBarrel_C : public ABP_LiquidContainerBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x798(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_WaterBarrel_C* GetDefaultObj();

	bool ActorCanConnectToNetwork(enum class EIcarusResourceType Type, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UFillableComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_IsFull_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue);
	void Deployable_Interact(class AActor* Interactor, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnWaterDepleted();
	void ExecuteUbergraph_BP_WaterBarrel(int32 EntryPoint, enum class EValid CallFunc_GetTrait_Paths, class UWaterComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EValid CallFunc_GetTrait_Paths_1, class UWaterComponent* CallFunc_GetTrait_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EValid CallFunc_GetTrait_Paths_2, class UWaterComponent* CallFunc_GetTrait_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, float K2Node_Event_DeltaSeconds, enum class EValid CallFunc_GetTrait_Paths_3, class UWaterComponent* CallFunc_GetTrait_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, int32 CallFunc_FTrunc_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_4, class UFillableComponent* CallFunc_GetTrait_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess_4, int32 CallFunc_AddUnits_ReturnValue, bool CallFunc_IsFull_ReturnValue);
};

}


