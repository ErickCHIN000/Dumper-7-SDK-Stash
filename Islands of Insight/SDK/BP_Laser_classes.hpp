#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x3CC - 0x390)
// BlueprintGeneratedClass BP_Laser.BP_Laser_C
class ABP_Laser_C : public APowerLaser
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         Laser_Collision;                                   // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Colour;                                            // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CenterPos;                                         // 0x3B0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LookAtDir;                                         // 0x3BC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        Length;                                            // 0x3C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Laser_C* GetDefaultObj();

	void BPI_OnStatusChanged(enum class EPoleStatus NewStatus);
	void ReceiveBeginPlay();
	void OnDestroyed_Event_0(class AActor* DestroyedActor);
	void ExecuteUbergraph_BP_Laser(int32 EntryPoint, class AActor* K2Node_CustomEvent_DestroyedActor, const struct FLinearColor& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPoleStatus Temp_byte_Variable, enum class EPoleStatus K2Node_Event_newStatus, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_1, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


