#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x3F0 - 0x3D8)
// BlueprintGeneratedClass EM_FruitOrgasm.EM_FruitOrgasm_C
class AEM_FruitOrgasm_C : public ASexyEventMarker
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Fruit;                                             // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Activated;                                         // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FruitScale;                                        // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AEM_FruitOrgasm_C* GetDefaultObj();

	void OnTrigger(bool bFromActivation);
	void Reset();
	void OnBlock(bool bFromActivation);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_EM_FruitOrgasm(int32 EntryPoint, const struct FVector& CallFunc_MakeVector_ReturnValue, bool K2Node_Event_bFromActivation_1, bool K2Node_Event_bFromActivation, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_FInterpTo_Constant_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue);
};

}


