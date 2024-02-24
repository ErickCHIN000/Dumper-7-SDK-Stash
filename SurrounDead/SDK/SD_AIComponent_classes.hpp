#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD0 - 0xA0)
// BlueprintGeneratedClass SD_AIComponent.SD_AIComponent_C
class USD_AIComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class Enum_AIBehviour                   Behaviour;                                         // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_752[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MeleeAttackDistance;                               // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AIWaypoint_C*                      Waypoint;                                          // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAnimSequence*                         IdleAnimation;                                     // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                         MovementBlendspace;                                // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USD_AIComponent_C* GetDefaultObj();

	void CheckBehaviour(class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SetBB_LockOnTarget(const struct FVector& VectorValue);
	void SetBB_Behaviour(enum class Enum_AIBehviour EnumValue, class FName CallFunc_MakeLiteralName_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SetBB_Location(const struct FVector& VectorValue, class FName CallFunc_MakeLiteralName_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SD_AIComponent(int32 EntryPoint);
};

}


