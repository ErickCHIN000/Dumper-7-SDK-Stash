#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB1 (0x211 - 0x160)
// BlueprintGeneratedClass BP_FluxDataAudioComponent.BP_FluxDataAudioComponent_C
class UBP_FluxDataAudioComponent_C : public UBP_FluxDataComponent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x160(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       AudioSource;                                       // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundMixer;                                        // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundParameter;                                    // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       SourceLocationChange;                              // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SourceVolumeChange;                                // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SearchGridDivisions;                               // 0x190(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DF9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SearchGridWidth;                                   // 0x198(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DistantSamples;                                    // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AmbientVolume;                                     // 0x1A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CloseSamples;                                      // 0x1B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FromOldToNewLocation;                              // 0x1B8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OldLocation;                                       // 0x1D0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               NewLocation;                                       // 0x1E8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AmbientVelocity;                                   // 0x200(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AudioCooldownTime;                                 // 0x208(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OnCooldown;                                        // 0x210(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_FluxDataAudioComponent_C* GetDefaultObj();

	void ApplyNiagaraParameters(double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_SetFloatParameter_Param_ImplicitCast);
	void SetFluidDistance(double CameraNearSurface, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetFloatParameter_InFloat_ImplicitCast);
	void DrawDebugSource(class UAudioComponent* SourceComponent, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FColor& K2Node_MakeStruct_Color, const struct FColor& K2Node_MakeStruct_Color_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FColor& K2Node_MakeStruct_Color_2, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FColor& K2Node_MakeStruct_Color_3, const struct FColor& K2Node_Select_Default, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_DrawDebugSphere_Radius_ImplicitCast);
	void Update_Source(const struct FVector& Location, double Velocity, int32 Index, double Distance, const struct FVector& LocationNew, const struct FVector& LocationPrev, const struct FVector& Difference, class UAudioComponent* SourceComponent, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UAVFXEnvironmentSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, TArray<struct FVector>& CallFunc_GetCoastlinePointsNearest_OutputPoints, bool CallFunc_GetCoastlinePointsNearest_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveParticleData(TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, struct FVector& SimulationPositionOffset);
	void ReceiveTick(float DeltaSeconds);
	void StartCooldown();
	void ExecuteUbergraph_BP_FluxDataAudioComponent(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, TArray<struct FBasicParticleData>& K2Node_Event_Data, class UNiagaraSystem* K2Node_Event_NiagaraSystem, const struct FVector& K2Node_Event_SimulationPositionOffset, float K2Node_Event_DeltaSeconds, const struct FBasicParticleData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FVector>& K2Node_MakeArray_Array, double CallFunc_Update_Source_Velocity_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast);
};

}


