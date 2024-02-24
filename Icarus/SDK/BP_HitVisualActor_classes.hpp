#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x250 - 0x220)
// BlueprintGeneratedClass BP_HitVisualActor.BP_HitVisualActor_C
class ABP_HitVisualActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EPhysicalSurface                  SourceSurfaceType;                                 // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EPhysicalSurface                  HitSurfaceType;                                    // 0x241(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1C6A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                HitActor;                                          // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_HitVisualActor_C* GetDefaultObj();

	void UpdateNiagaraShadows(class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, enum class EShadowsSetting CallFunc_GetShadows_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnLoaded_49B5FA3C4DB143648AEFC3B09787C0D9(class UObject* Loaded);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_HitVisualActor(int32 EntryPoint, class UObject* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, class UParticleSystem* K2Node_DynamicCast_AsParticle_System, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FSurfacesRowHandle& CallFunc_MakeSurfacesRowFromSurfaceType_ReturnValue, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, const struct FSurfacesData& CallFunc_GetSurfacesStruct_Surfaces, enum class EValid CallFunc_GetSurfacesStruct_Paths, bool CallFunc_GetShowBloodEffects_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UObject* K2Node_CustomEvent_Loaded, class FText CallFunc_Conv_ObjectToText_ReturnValue, class UNiagaraSystem* CallFunc_GetAsset_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_ObjectToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FSurfacesRowHandle& CallFunc_MakeSurfacesRowFromSurfaceType_ReturnValue_1, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
};

}


