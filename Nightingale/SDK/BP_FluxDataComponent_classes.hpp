#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x160 - 0xA0)
// BlueprintGeneratedClass BP_FluxDataComponent.BP_FluxDataComponent_C
class UBP_FluxDataComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FVector>                       ReadbackLocations;                                 // 0xA8(0x10)(Edit, BlueprintVisible)
	double                                       ReadbackEventInterval;                             // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        CustomReadbackSystem;                              // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         FindWorldSurface;                                  // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAfterReadback;                                   // 0xC9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5592[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FluxFluidHeight;                                   // 0xD0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FluxSurfaceLocation;                               // 0xD8(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FluxFluidVelocity;                                 // 0xF0(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnReceiveParticleData;                             // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         UseGroundMap;                                      // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseWave;                                           // 0x119(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55A2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  OwnerComponentTag;                                 // 0x11C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  OwnerSocketName;                                   // 0x124(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     ExportDataInstance;                                // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                SurfaceActor;                                      // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         DrawDebug;                                         // 0x140(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBasicParticleData>            ReadbackData;                                      // 0x148(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       SampleTime;                                        // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_FluxDataComponent_C* GetDefaultObj();

	void GetOwnerComponent(class USceneComponent** SceneComponent, const TArray<class USceneComponent*>& OwnerSceneTagComponents, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class USceneComponent* CallFunc_Array_Get_Item, class AActor* CallFunc_GetOwner_ReturnValue_1, TArray<class USceneComponent*>& CallFunc_GetComponentsByTag_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1);
	void ApplyNiagaraParameters(TScriptInterface<class IBPI_FluxSurface_C> K2Node_DynamicCast_AsBPI_Flux_Surface, bool K2Node_DynamicCast_bSuccess, double CallFunc_FMax_ReturnValue, float CallFunc_SetFloatParameter_Param_ImplicitCast);
	void InitEventListener(class UNiagaraSystem* Temp_object_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UNiagaraSystem* Temp_object_Variable_1, class USceneComponent* CallFunc_GetOwnerComponent_SceneComponent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UNiagaraSystem* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, class UNiagaraSystem* K2Node_Select_Default_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void RemoveEventListener(bool CallFunc_IsValid_ReturnValue);
	void Get_Readback_Indexed_Position(int32 Index, struct FVector* Location, struct FVector* Velocity, double* Height, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, double K2Node_FunctionResult_Height_ImplicitCast);
	void SetRelativeSamplePoints(TArray<struct FVector>& Points, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1);
	void SetArrayData(TArray<struct FBasicParticleData>& ParticleDataStructure, double AverageScale, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_MakeVector_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FBasicParticleData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FBasicParticleData& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_DrawDebugSphere_Duration_ImplicitCast);
	void ReadParticleData(TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void SetPointData(struct FBasicParticleData& ParticleDataStructure, double VeticalVelocity, double PrevZLocation, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, double CallFunc_BreakVector_X_3, double CallFunc_BreakVector_Y_3, double CallFunc_BreakVector_Z_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue_1, double CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, double K2Node_VariableSet_FluxFluidHeight_ImplicitCast, float CallFunc_DrawDebugArrow_Duration_ImplicitCast, float CallFunc_DrawDebugBox_Duration_ImplicitCast);
	void GetWorldSurface(class AActor** Output, int32 Temp_int_Array_Index_Variable, class USceneComponent* CallFunc_GetOwnerComponent_SceneComponent, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsWithInterface_OutActors, class AActor* CallFunc_GetOwner_ReturnValue_1, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IBPI_FluxSurface_C> K2Node_DynamicCast_AsBPI_Flux_Surface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UPrimitiveComponent* CallFunc_GetVolumeCollision_Volume, const struct FVector& CallFunc_K2_SphereOverlapComponent_HitLocation, const struct FVector& CallFunc_K2_SphereOverlapComponent_HitNormal, class FName CallFunc_K2_SphereOverlapComponent_BoneName, const struct FHitResult& CallFunc_K2_SphereOverlapComponent_OutHit, bool CallFunc_K2_SphereOverlapComponent_ReturnValue, bool CallFunc_IsOverlappingActor_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue);
	void SetSurfaceActor(class AActor*& Interface, bool CallFunc_IsActive_ReturnValue);
	void ReceiveParticleData(TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, struct FVector& SimulationPositionOffset);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void Activation(class UActorComponent* Component, bool bReset);
	void Deactivation(class UActorComponent* Component);
	void ReceiveReadData(TArray<struct FBasicParticleData>& Data);
	void ExecuteUbergraph_BP_FluxDataComponent(int32 EntryPoint, class AActor* CallFunc_GetWorldSurface_Output, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FBasicParticleData>& K2Node_Event_Data, class UNiagaraSystem* K2Node_Event_NiagaraSystem, const struct FVector& K2Node_Event_SimulationPositionOffset, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UActorComponent* K2Node_CustomEvent_Component_1, bool K2Node_CustomEvent_bReset, class UActorComponent* K2Node_CustomEvent_Component, TArray<struct FBasicParticleData>& K2Node_CustomEvent_Data, class AActor* CallFunc_GetOwner_ReturnValue, enum class ENetRole CallFunc_GetLocalRole_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnReceiveParticleData__DelegateSignature(TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem);
};

}


