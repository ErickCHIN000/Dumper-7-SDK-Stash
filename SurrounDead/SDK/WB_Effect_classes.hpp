#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x190 (0x450 - 0x2C0)
// WidgetBlueprintGeneratedClass WB_Effect.WB_Effect_C
class UWB_Effect_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      HighlightLoop;                                     // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeHighlight2;                                    // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeHighlight1;                                    // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeIn;                                            // 0x2E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               B_Content;                                         // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               b_HighlightLoop;                                   // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               B_Particle;                                        // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               B_Punctiform;                                      // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               B_SoundEffect;                                     // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               B_Stretched;                                       // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImagePunctiform;                                   // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageStretched;                                    // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_Particle;                                       // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_Particle_Container;                             // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_Punctiform;                                     // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_Punctiform_Scale;                               // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_Stretched_Scale;                                // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Content;                                        // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Particle;                                       // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WS_EffectTextureType;                              // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EProgressBarFillType              FillType;                                          // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2219[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CurrentPercent;                                    // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_Effects                            Effect;                                            // 0x378(0x81)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_222A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Size;                                              // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LastPercent;                                       // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsDesignTime;                                     // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsActive;                                          // 0x419(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2239[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       UIAudio;                                           // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         EffectActive;                                      // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_223F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            StartProgressChangeColor;                          // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            StopProgressChangeColor;                           // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWB_Effect_C* GetDefaultObj();

	bool IsEffectTypeProgressChangeColor(enum class EEffectType CallFunc_GetEffectType_Effect_Texture_Type, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void GetDecayTime(double* Decay_Time, double K2Node_FunctionResult_Decay_Time_ImplicitCast);
	bool IsEffectTypeSoundEffectLooped(enum class EEffectType CallFunc_GetEffectType_Effect_Texture_Type, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void GetSoundVolume(double* Sound_Volume_Multiplier, double K2Node_FunctionResult_Sound_Volume_Multiplier_ImplicitCast);
	bool IsEffectTypeSoundEffect(enum class EEffectType CallFunc_GetEffectType_Effect_Texture_Type, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void GetSoundEffect(class USoundBase** Sound_Effect);
	void GetAddRotationToParticles(bool* Add_Rotation_to_Particles);
	void GetParticleSpread(double* Particle_Spread, double K2Node_FunctionResult_Particle_Spread_ImplicitCast);
	double FindMinSize(const struct FVector2D& Size, bool Temp_bool_Variable, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double K2Node_Select_Default);
	void AddAttributes(class UImage* Image, const struct FVector2D& CallFunc_GetEffectShear_Effect_Shear, double CallFunc_GetEffectAngle_Effect_Angle, class UObject* CallFunc_GetEffectTexture_Custom_Effect_Texture, const struct FLinearColor& CallFunc_GetEffectColor_Effect_Color, const struct FVector2D& CallFunc_GetEffectTranslation_Transition, const struct FVector2D& CallFunc_GetEffectScale_EffectScale, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast);
	void GetNumParticles(int32* NumParticles, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	bool IsEffectTypeParticle(enum class EEffectType CallFunc_GetEffectType_Effect_Texture_Type, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void GetPlaybackSpeed(double* Playback_Speed, double K2Node_FunctionResult_Playback_Speed_ImplicitCast);
	void GetEffectAngle(double* Effect_Angle, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_Value_ImplicitCast);
	void GetEffectShear(struct FVector2D* Effect_Shear);
	bool IsTriggeredAlwaysOnSpecificPercentValue(enum class ETriggerMethod CallFunc_GetTriggerMethod_Trigger, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	bool IsTriggerSpecificPercent(enum class ETriggerMethod CallFunc_GetTriggerMethod_Trigger, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2);
	void SwitchEffectType(int32 Index);
	void Anim_HighlightLoop(bool StartStop, double PlaybackSpeed, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, enum class EUMGSequencePlayMode K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast);
	void Anim_Highlight2(double PlaybackSpeed, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, enum class EUMGSequencePlayMode K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast);
	void Anim_Highlight1(double PlaybackSpeed, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, enum class EUMGSequencePlayMode K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast);
	void GetEffectColor(struct FLinearColor* Effect_Color);
	void GetEffectScale(struct FVector2D* EffectScale);
	void Anim_Fade(bool FadeIn, double PlaybackSpeed, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, enum class EUMGSequencePlayMode K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast);
	bool IsTriggeredAlways(enum class ETriggerMethod CallFunc_GetTriggerMethod_Trigger, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void GetEffectTexture(class UObject** Custom_Effect_Texture, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* Temp_object_Variable_2, class UObject* Temp_object_Variable_3, class UObject* Temp_object_Variable_4, bool Temp_bool_Variable, class UObject* Temp_object_Variable_5, enum class EEffectType Temp_byte_Variable, enum class EEffectType CallFunc_GetEffectType_Effect_Texture_Type, class UObject* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, class UObject* K2Node_Select_Default_1);
	void GetEffectType(enum class EEffectType* Effect_Texture_Type);
	void GetEffectTranslation(struct FVector2D* Transition);
	void GetSpecificPercentValue(double* Specific_Percent_Value, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_Value_ImplicitCast);
	void GetTriggerMethod(enum class ETriggerMethod* Trigger);
	void SetSize(const struct FVector2D& Size);
	void AddEffect(const struct FS_Effects& Effect);
	void SetFillType(enum class EProgressBarFillType FillType);
	void StartEffect();
	void StopEffect();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TriggerEffect();
	void AddEffectTextureType();
	void EventPreConstruct(bool IsDesignTime);
	void Construct();
	void CreateParticle(int32 NumParticles);
	void ClearParticles();
	void OnAnimationFinished_Event_0();
	void GetProgressBar(class UProgressBarLinear_C* ProgressBar);
	void UpdatePercent(double Percent);
	void OnAudioFinished_Event_0();
	void ExecuteUbergraph_WB_Effect(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_IsClosed_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_4, bool Temp_bool_Has_Been_Initd_Variable_5, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWB_Particle_C* K2Node_DynamicCast_AsWB_Particle, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_IsClosed_Variable_4, bool Temp_bool_Has_Been_Initd_Variable_6, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWB_Particle_C* K2Node_DynamicCast_AsWB_Particle_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_7, bool Temp_bool_IsClosed_Variable_5, bool Temp_bool_Has_Been_Initd_Variable_8, bool Temp_bool_Has_Been_Initd_Variable_9, bool Temp_bool_IsClosed_Variable_6, bool Temp_bool_Has_Been_Initd_Variable_10, double CallFunc_GetSpecificPercentValue_Specific_Percent_Value, bool Temp_bool_IsClosed_Variable_7, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_GetSpecificPercentValue_Specific_Percent_Value_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool Temp_bool_IsClosed_Variable_8, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, double CallFunc_GetSpecificPercentValue_Specific_Percent_Value_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable_11, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_2, double CallFunc_GetSpecificPercentValue_Specific_Percent_Value_3, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_3, bool CallFunc_Less_DoubleDouble_ReturnValue_1, double CallFunc_GetSpecificPercentValue_Specific_Percent_Value_4, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_4, bool CallFunc_Less_DoubleDouble_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_IsClosed_Variable_9, bool Temp_bool_Variable_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_3, bool CallFunc_Less_DoubleDouble_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, class UWB_Particle_C* CallFunc_Create_ReturnValue, double Temp_real_Variable, bool Temp_bool_Has_Been_Initd_Variable_12, const struct FVector2D& K2Node_CustomEvent_Size, const struct FS_Effects& K2Node_CustomEvent_Effect, enum class EProgressBarFillType K2Node_CustomEvent_FillType, bool Temp_bool_Variable_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class EEffectType CallFunc_GetEffectType_Effect_Texture_Type, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_CustomEvent_IsDesignTime, bool Temp_bool_IsClosed_Variable_10, bool Temp_bool_Has_Been_Initd_Variable_13, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_CustomEvent_NumParticles, bool CallFunc_LessEqual_IntInt_ReturnValue_2, bool Temp_bool_IsClosed_Variable_11, class UObject* CallFunc_GetEffectTexture_Custom_Effect_Texture, double CallFunc_GetPlaybackSpeed_Playback_Speed, const struct FLinearColor& CallFunc_GetEffectColor_Effect_Color, const struct FVector2D& CallFunc_GetEffectScale_EffectScale, const struct FVector2D& CallFunc_GetEffectTranslation_Transition, double CallFunc_GetEffectAngle_Effect_Angle, const struct FVector2D& CallFunc_GetEffectShear_Effect_Shear, bool Temp_bool_IsClosed_Variable_12, bool Temp_bool_IsClosed_Variable_13, enum class ETriggerMethod CallFunc_GetTriggerMethod_Trigger, bool Temp_bool_Variable_3, double CallFunc_GetParticleSpread_Particle_Spread, bool CallFunc_GetAddRotationToParticles_Add_Rotation_to_Particles, class USoundBase* CallFunc_GetSoundEffect_Sound_Effect, bool CallFunc_IsEffectTypeSoundEffect_ReturnValue, double CallFunc_GetSoundVolume_Sound_Volume_Multiplier, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, bool CallFunc_IsEffectTypeSoundEffectLooped_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsEffectTypeSoundEffect_ReturnValue_1, bool CallFunc_IsEffectTypeSoundEffectLooped_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_14, bool CallFunc_BooleanOR_ReturnValue_1, double CallFunc_GetDecayTime_Decay_Time, const struct FLinearColor& CallFunc_GetEffectColor_Effect_Color_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsEffectTypeProgressChangeColor_ReturnValue, double CallFunc_GetSpecificPercentValue_Specific_Percent_Value_5, bool CallFunc_IsTriggerSpecificPercent_ReturnValue, bool Temp_bool_IsClosed_Variable_14, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_15, double CallFunc_GetWorldDeltaSeconds_ReturnValue, bool Temp_bool_Variable_4, bool CallFunc_IsEffectTypeSoundEffectLooped_ReturnValue_2, double K2Node_Select_Default, double K2Node_Select_Default_1, double CallFunc_MapRangeClamped_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool Temp_bool_IsClosed_Variable_15, bool Temp_bool_IsClosed_Variable_16, bool Temp_bool_Has_Been_Initd_Variable_16, bool Temp_bool_IsClosed_Variable_17, bool Temp_bool_Has_Been_Initd_Variable_17, bool Temp_bool_IsClosed_Variable_18, enum class ETriggerMethod CallFunc_GetTriggerMethod_Trigger_1, bool K2Node_SwitchEnum_CmpSuccess_1, double CallFunc_FindMinSize_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsAnimationPlayingForward_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, int32 CallFunc_GetNumParticles_NumParticles, bool CallFunc_IsEffectTypeParticle_ReturnValue, bool Temp_bool_Variable_5, bool Temp_bool_Has_Been_Initd_Variable_18, class UWidget* CallFunc_GetChildAt_ReturnValue_2, class UWB_Particle_C* K2Node_DynamicCast_AsWB_Particle_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_GetChildrenCount_ReturnValue_2, bool Temp_bool_IsClosed_Variable_19, bool CallFunc_LessEqual_IntInt_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable_19, class UProgressBarLinear_C* K2Node_CustomEvent_ProgressBar, double K2Node_CustomEvent_Percent, double K2Node_Select_Default_2, bool Temp_bool_Has_Been_Initd_Variable_20, double CallFunc_FInterpTo_Constant_ReturnValue, double K2Node_Select_Default_3, bool Temp_bool_Variable_6, bool K2Node_Select_Default_4, bool Temp_bool_Has_Been_Initd_Variable_21, bool Temp_bool_IsClosed_Variable_20, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsEffectTypeSoundEffect_ReturnValue_2, bool Temp_bool_Variable_7, bool CallFunc_IsEffectTypeParticle_ReturnValue_1, bool CallFunc_IsEffectTypeSoundEffectLooped_ReturnValue_3, bool K2Node_Select_Default_5, bool CallFunc_IsEffectTypeSoundEffect_ReturnValue_3, bool CallFunc_IsEffectTypeProgressChangeColor_ReturnValue_1, bool CallFunc_IsTriggeredAlwaysOnSpecificPercentValue_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_IsTriggeredAlways_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_IsClosed_Variable_21, float CallFunc_CreateSound2D_VolumeMultiplier_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast);
	void StopProgressChangeColor__DelegateSignature();
	void StartProgressChangeColor__DelegateSignature(const struct FLinearColor& Color);
};

}


