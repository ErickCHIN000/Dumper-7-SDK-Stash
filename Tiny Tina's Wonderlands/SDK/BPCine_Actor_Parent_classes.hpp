#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x528 - 0x4B8)
// BlueprintGeneratedClass BPCine_Actor_Parent.BPCine_Actor_Parent_C
class ABPCine_Actor_Parent_C : public AOakCinematicActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(Transient, DuplicateTransient)
	class UOakDialogComponent*                   OakDialog;                                         // 0x4C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             SkeletalMesh;                                      // 0x4C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWwiseAudioComponent*                  WwiseAudio;                                        // 0x4D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFaceFXComponent*                      FaceFX;                                            // 0x4E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FaceFX_Alpha;                                      // 0x4E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        AddPose_Alpha;                                     // 0x4EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        EyePlusBrow_Control;                               // 0x4F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        LowerFace_Control;                                 // 0x4F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        StreamingImportanceDuration;                       // 0x4F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_463E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            ImportantMaterials;                                // 0x500(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	bool                                         Unpainted;                                         // 0x510(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_4642[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInstance*>             UnpaintedMaterials;                                // 0x518(0x10)(Edit, BlueprintVisible, ZeroConstructor)

	static class UClass* StaticClass();
	static class ABPCine_Actor_Parent_C* GetDefaultObj();

	void CinematicStream();
	void UserConstructionScript(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable2, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable3, int32 Temp_int_Loop_Counter_Variable3, int32 CallFunc_Add_IntInt_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable4, int32 CallFunc_Add_IntInt_ReturnValue4, TArray<class USkeletalMeshComponent*>& CallFunc_GetComponentsByClass_ReturnValue, TArray<class UStaticMeshComponent*>& CallFunc_GetComponentsByClass_ReturnValue1, class USkeletalMeshComponent* CallFunc_Array_Get_Item, class UStaticMeshComponent* CallFunc_Array_Get_Item1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue1, class UMaterialInterface* CallFunc_Array_Get_Item2, class UMaterialInterface* CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue4, bool CallFunc_Less_IntInt_ReturnValue4, int32 CallFunc_Array_AddUnique_ReturnValue1, int32 Temp_int_Array_Index_Variable4, class UMaterialInstance* CallFunc_Array_Get_Item4, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue);
	void StreamMe();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPCine_Actor_Parent(int32 EntryPoint);
};

}


