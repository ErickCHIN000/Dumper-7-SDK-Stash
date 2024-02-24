#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xB0 - 0x98)
// BlueprintGeneratedClass Zombie_MovementSpeed.Zombie_MovementSpeed_C
class UZombie_MovementSpeed_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class Enum_ZombieMovementType           MovementType;                                      // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_271D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_MasterZombie_C*                    Zombie;                                            // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UZombie_MovementSpeed_C* GetDefaultObj();

	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_Zombie_MovementSpeed(int32 EntryPoint, TScriptInterface<class IBPI_AI_C> K2Node_DynamicCast_AsBPI_AI, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_AI_C> K2Node_DynamicCast_AsBPI_AI_1, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_GetMovementSpeeds_RoamingSpeed, double CallFunc_GetMovementSpeeds_AlertSpeed, double CallFunc_GetMovementSpeeds_AttackSpeed, double CallFunc_GetMovementSpeeds_RoamingSpeed_1, double CallFunc_GetMovementSpeeds_AlertSpeed_1, double CallFunc_GetMovementSpeeds_AttackSpeed_1, TScriptInterface<class IBPI_AI_C> K2Node_DynamicCast_AsBPI_AI_2, bool K2Node_DynamicCast_bSuccess_2, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, double CallFunc_GetMovementSpeeds_RoamingSpeed_2, double CallFunc_GetMovementSpeeds_AlertSpeed_2, double CallFunc_GetMovementSpeeds_AttackSpeed_2, class ABP_MasterZombie_C* K2Node_DynamicCast_AsBP_Master_Zombie, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_SwitchEnum_CmpSuccess);
};

}


