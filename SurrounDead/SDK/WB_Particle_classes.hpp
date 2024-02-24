#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x3A0 - 0x2C0)
// WidgetBlueprintGeneratedClass WB_Particle.WB_Particle_C
class UWB_Particle_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Fade;                                              // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               B_Color;                                           // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               B_Particle;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_ParticleFX;                                     // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ParticleImage;                                     // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       PlaybackSpeed;                                     // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCanTrigger;                                       // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C33[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Value;                                             // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RandomScale;                                       // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_Effect_C*                          Parent;                                            // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             RandomTranslation;                                 // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Scale;                                             // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Translation;                                       // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Shear;                                             // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Angle;                                             // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Size;                                              // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETriggerMethod                    TriggerMethod;                                     // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDesignTime;                                      // 0x371(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C4E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RandomPlaybackspeed;                               // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TriggerActive;                                     // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C59[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ParticleSpread;                                    // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseParticleRotation;                               // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C5D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RandomAngle;                                       // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Particle_C* GetDefaultObj();

	void SetScaleV2D(const struct FVector2D& Scale);
	double CountValue(double Time, bool Temp_bool_Variable, double CallFunc_Divide_DoubleDouble_ReturnValue, double Temp_real_Variable, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double K2Node_Select_Default);
	double GetClampedMinSize(double Multiplicator, double CallFunc_GetMaxSize_ReturnValue, double CallFunc_GetMinSize_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue);
	void GetTranslation(struct FVector2D* Translation);
	void SetTranslation(const struct FVector2D& Translation);
	double GetMaxSize(bool Temp_bool_Variable, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double K2Node_Select_Default);
	double GetMinSize(bool Temp_bool_Variable, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double K2Node_Select_Default);
	bool IsTriggerMethodAlways(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void Anim_Fade(double PlaybackSpeed, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, enum class EUMGSequencePlayMode K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast);
	void SetAngle(double Angle, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast);
	void SetScale(double Scale, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void CreateParticle(class UObject* Image, double PlaybackSpeed, const struct FLinearColor& Color, const struct FVector2D& Scale, const struct FVector2D& Translation, const struct FVector2D& Shear, double Angle, const struct FVector2D& Size, enum class ETriggerMethod TriggerMethod, bool bIsDesignTime, double ParticleSpread, bool UseParticleRotation);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TriggerParticle();
	void SetParticleInfo();
	void StopTrigger();
	void StartTrigger();
	void OnAnimationFinished_Event_0();
	void ExecuteUbergraph_WB_Particle(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UObject* K2Node_CustomEvent_Image, double K2Node_CustomEvent_PlaybackSpeed, const struct FLinearColor& K2Node_CustomEvent_Color, const struct FVector2D& K2Node_CustomEvent_Scale, const struct FVector2D& K2Node_CustomEvent_Translation, const struct FVector2D& K2Node_CustomEvent_Shear, double K2Node_CustomEvent_Angle, const struct FVector2D& K2Node_CustomEvent_Size, enum class ETriggerMethod K2Node_CustomEvent_TriggerMethod, bool K2Node_CustomEvent_bIsDesignTime, double K2Node_CustomEvent_ParticleSpread, bool K2Node_CustomEvent_UseParticleRotation, bool CallFunc_IsValid_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Variable, float CallFunc_GetEndTime_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_CountValue_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool Temp_bool_IsClosed_Variable, double CallFunc_RandomFloatInRange_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable_1, class UObject* Temp_object_Variable, double CallFunc_GetClampedMinSize_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_GetClampedMinSize_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_3, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_RandomizePositiveNegativeFloat_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_4, double CallFunc_RandomizePositiveNegativeFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_3, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double K2Node_Select_Default, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, bool Temp_bool_IsClosed_Variable_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, bool Temp_bool_Variable_1, class UObject* K2Node_Select_Default_1, double CallFunc_MapRangeClamped_ReturnValue_3, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast);
};

}


