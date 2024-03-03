#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8C (0x2EC - 0x260)
// WidgetBlueprintGeneratedClass WB_Particle.WB_Particle_C
class UWB_Particle_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      Fade;                                              // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               B_Color;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               B_Particle;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_ParticleFX;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ParticleImage;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        PlaybackSpeed;                                     // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCanTrigger;                                       // 0x294(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2712[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RandomScale;                                       // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_Effect_C*                          Parent;                                            // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             RandomTranslation;                                 // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Scale;                                             // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Translation;                                       // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Shear;                                             // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Angle;                                             // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Size;                                              // 0x2CC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETriggerMethod                    TriggerMethod;                                     // 0x2D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDesignTime;                                      // 0x2D5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2741[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RandomPlaybackspeed;                               // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TriggerActive;                                     // 0x2DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2749[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ParticleSpread;                                    // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseParticleRotation;                               // 0x2E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2752[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RandomAngle;                                       // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Particle_C* GetDefaultObj();

	void SetScaleV2D(const struct FVector2D& Scale);
	float CountValue(float Time, bool Temp_bool_Variable, float CallFunc_Divide_FloatFloat_ReturnValue, float Temp_float_Variable, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_Select_Default);
	float GetClampedMinSize(float Multiplicator, float CallFunc_GetMaxSize_ReturnValue, float CallFunc_GetMinSize_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void GetTranslation(struct FVector2D* Translation);
	void SetTranslation(const struct FVector2D& Translation);
	float GetMaxSize(bool Temp_bool_Variable, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Select_Default);
	float GetMinSize(bool Temp_bool_Variable, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Select_Default);
	bool IsTriggerMethodAlways(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void Anim_Fade(float PlaybackSpeed, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, enum class EUMGSequencePlayMode K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetAngle(float Angle);
	void SetScale(float Scale, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void CreateParticle(class UObject* Image, float PlaybackSpeed, const struct FLinearColor& Color, const struct FVector2D& Scale, const struct FVector2D& Translation, const struct FVector2D& Shear, float Angle, const struct FVector2D& Size, enum class ETriggerMethod TriggerMethod, bool bIsDesignTime, float ParticleSpread, bool UseParticleRotation);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TriggerParticle();
	void SetParticleInfo();
	void StopTrigger();
	void StartTrigger();
	void OnAnimationFinished_Event_0();
	void ExecuteUbergraph_WB_Particle(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UObject* K2Node_CustomEvent_Image, float K2Node_CustomEvent_PlaybackSpeed, const struct FLinearColor& K2Node_CustomEvent_Color, const struct FVector2D& K2Node_CustomEvent_Scale, const struct FVector2D& K2Node_CustomEvent_Translation, const struct FVector2D& K2Node_CustomEvent_Shear, float K2Node_CustomEvent_Angle, const struct FVector2D& K2Node_CustomEvent_Size, enum class ETriggerMethod K2Node_CustomEvent_TriggerMethod, bool K2Node_CustomEvent_bIsDesignTime, float K2Node_CustomEvent_ParticleSpread, bool K2Node_CustomEvent_UseParticleRotation, bool CallFunc_IsValid_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Variable, float CallFunc_GetEndTime_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_CountValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool Temp_bool_IsClosed_Variable, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable_1, class UObject* Temp_object_Variable, float CallFunc_GetClampedMinSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_GetClampedMinSize_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_RandomizePositiveNegativeFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_4, float CallFunc_RandomizePositiveNegativeFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, bool Temp_bool_IsClosed_Variable_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, bool Temp_bool_Variable_1, class UObject* K2Node_Select_Default_1, float CallFunc_MapRangeClamped_ReturnValue_3);
};

}


