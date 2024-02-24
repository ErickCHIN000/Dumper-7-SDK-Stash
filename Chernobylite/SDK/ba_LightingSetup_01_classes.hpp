#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8BC (0xADC - 0x220)
// BlueprintGeneratedClass ba_LightingSetup_01.ba_LightingSetup_01_C
class Aba_LightingSetup_01_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UArrowComponent*                       Arrow;                                             // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   Billboard;                                         // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Area;                                              // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 PostProcess;                                       // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class Ubp_LightingScenario_01_C*             LightingScenario;                                  // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableInPreview;                                   // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A90[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Priority;                                          // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ChangeTime;                                        // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnablePostProcess;                                 // 0x25C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         OverwriteDirectionalLight;                         // 0x25D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A9A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_LightingSetup_01_DirectionalLight DirectionalLightSettings;                          // 0x260(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OverwriteSkyLight;                                 // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A9D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_LightingSetup_01_SkyLight         SkyLightSettings;                                  // 0x2C4(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OverwriteAtmosphericFog;                           // 0x2F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AA8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_LightingSetup_01_AtmosphericFog   AtmosphericFogSettings;                            // 0x2F8(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OverwriteExponentialHeightFog;                     // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AB2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_LightingSetup_01_ExponentialHeightFog ExponentialHeightFogSettings;                      // 0x330(0x80)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OverwriteSkySphere;                                // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_LightingSetup_01_SkySphere        SkySphereSettings;                                 // 0x3B8(0x84)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ABE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPostProcessSettings                  PostProcessSettings;                               // 0x440(0x680)(Edit, BlueprintVisible)
	class Aba_LightingController_01_C*           LightingController;                                // 0xAC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsActive;                                          // 0xAC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AC8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Ubp_LightingScenario_01_C*             OldLightingScenario;                               // 0xAD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PostprocessAlpha;                                  // 0xAD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_LightingSetup_01_C* GetDefaultObj();

	void UpdatePostProcessBlend(float Alpha, float CallFunc_Lerp_ReturnValue);
	void LoadSetupAsset();
	void SaveSetupAsset();
	void Inicialize(float CallFunc_Conv_IntToFloat_ReturnValue);
	void FindController(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class Aba_LightingController_01_C*>& CallFunc_GetAllActorsOfClass_OutActors, class Aba_LightingController_01_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UserConstructionScript(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInEditor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_ba_LightingSetup_01(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class AActor* K2Node_Event_OtherActor_1, float K2Node_Event_DeltaSeconds, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Event_OtherActor, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_IsInEditor_ReturnValue, bool CallFunc_IsInEditor_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1);
};

}


