#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x780 - 0x74C)
// BlueprintGeneratedClass BP_ExplodingObject_DaffodilBarrel.BP_ExplodingObject_DaffodilBarrel_C
class ABP_ExplodingObject_DaffodilBarrel_C : public ABP_ExplodingObject_Barrel_C
{
public:
	uint8                                        Pad_13E4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x750(0x8)(Transient, DuplicateTransient)
	class USphereComponent*                      DebugSphere;                                       // 0x758(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Debris04;                                          // 0x760(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Debris03;                                          // 0x768(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Debris02;                                          // 0x770(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Debris01;                                          // 0x778(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ExplodingObject_DaffodilBarrel_C* GetDefaultObj();

	void UserConstructionScript(enum class Enum_ExplodingObjectDamage CallFunc_Get_DamageType_DamageType, class UMaterialInstance* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Explode();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ExplodingObject_DaffodilBarrel(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class Enum_ExplodingObjectDamage CallFunc_Get_DamageType_DamageType, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UMaterialInstance* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FRotator& CallFunc_RandomRotator_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, float CallFunc_GetValueOfAttribute_ReturnValue);
};

}


