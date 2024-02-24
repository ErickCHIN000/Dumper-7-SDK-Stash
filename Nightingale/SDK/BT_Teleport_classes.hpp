#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7C (0x124 - 0xA8)
// BlueprintGeneratedClass BT_Teleport.BT_Teleport_C
class UBT_Teleport_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                TeleportLocationKey;                               // 0xB0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                Key;                                               // 0xD8(0x28)(Edit, BlueprintVisible)
	struct FVector                               TeleportLocation;                                  // 0x100(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseBBKeyName;                                     // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EA0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BB_Key_Name;                                       // 0x11C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBT_Teleport_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BT_Teleport(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetValueAsVector_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValidAILocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, double CallFunc_MakeVector_Z_ImplicitCast);
};

}


