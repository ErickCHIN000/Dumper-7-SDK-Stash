#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Effect_Circular.WB_Effect_Circular_C
// (None)

class UClass* UWB_Effect_Circular_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Effect_Circular_C");

	return Clss;
}


// WB_Effect_Circular_C WB_Effect_Circular.Default__WB_Effect_Circular_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Effect_Circular_C* UWB_Effect_Circular_C::GetDefaultObj()
{
	static class UWB_Effect_Circular_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Effect_Circular_C*>(UWB_Effect_Circular_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Effect_Circular.WB_Effect_Circular_C.RemoveParticleFromOverlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOverlay*                    Overlay                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Particle_C*              K2Node_DynamicCast_AsWB_Particle                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Effect_Circular_C::RemoveParticleFromOverlay(class UOverlay* Overlay, int32 CallFunc_GetChildrenCount_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWB_Particle_C* K2Node_DynamicCast_AsWB_Particle, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "RemoveParticleFromOverlay");

	Params::UWB_Effect_Circular_C_RemoveParticleFromOverlay_Params Parms{};

	Parms.Overlay = Overlay;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWB_Particle = K2Node_DynamicCast_AsWB_Particle;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.SwitchPunctiform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::SwitchPunctiform(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "SwitchPunctiform");

	Params::UWB_Effect_Circular_C_SwitchPunctiform_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.GetUseParticleStretched
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Use_Stretched_Particle                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Effect_Circular_C::GetUseParticleStretched(bool* Use_Stretched_Particle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "GetUseParticleStretched");

	Params::UWB_Effect_Circular_C_GetUseParticleStretched_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Use_Stretched_Particle != nullptr)
		*Use_Stretched_Particle = Parms.Use_Stretched_Particle;

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.IsEffectTypeProgressChangeColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// enum class EEffectType             CallFunc_GetEffectType_Effect_Texture_Type                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_Effect_Circular_C::IsEffectTypeProgressChangeColor(enum class EEffectType CallFunc_GetEffectType_Effect_Texture_Type, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "IsEffectTypeProgressChangeColor");

	Params::UWB_Effect_Circular_C_IsEffectTypeProgressChangeColor_Params Parms{};

	Parms.CallFunc_GetEffectType_Effect_Texture_Type = CallFunc_GetEffectType_Effect_Texture_Type;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.GetDecayTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Decay_Time                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::GetDecayTime(float* Decay_Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "GetDecayTime");

	Params::UWB_Effect_Circular_C_GetDecayTime_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Decay_Time != nullptr)
		*Decay_Time = Parms.Decay_Time;

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.IsEffectTypeSoundEffectLooped
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// enum class EEffectType             CallFunc_GetEffectType_Effect_Texture_Type                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_Effect_Circular_C::IsEffectTypeSoundEffectLooped(enum class EEffectType CallFunc_GetEffectType_Effect_Texture_Type, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "IsEffectTypeSoundEffectLooped");

	Params::UWB_Effect_Circular_C_IsEffectTypeSoundEffectLooped_Params Parms{};

	Parms.CallFunc_GetEffectType_Effect_Texture_Type = CallFunc_GetEffectType_Effect_Texture_Type;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.GetSoundVolume
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Sound_Volume_Multiplier                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::GetSoundVolume(float* Sound_Volume_Multiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "GetSoundVolume");

	Params::UWB_Effect_Circular_C_GetSoundVolume_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Sound_Volume_Multiplier != nullptr)
		*Sound_Volume_Multiplier = Parms.Sound_Volume_Multiplier;

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.IsEffectTypeSoundEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// enum class EEffectType             CallFunc_GetEffectType_Effect_Texture_Type                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_Effect_Circular_C::IsEffectTypeSoundEffect(enum class EEffectType CallFunc_GetEffectType_Effect_Texture_Type, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "IsEffectTypeSoundEffect");

	Params::UWB_Effect_Circular_C_IsEffectTypeSoundEffect_Params Parms{};

	Parms.CallFunc_GetEffectType_Effect_Texture_Type = CallFunc_GetEffectType_Effect_Texture_Type;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.GetSoundEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USoundBase*                  Sound_Effect                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::GetSoundEffect(class USoundBase** Sound_Effect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "GetSoundEffect");

	Params::UWB_Effect_Circular_C_GetSoundEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Sound_Effect != nullptr)
		*Sound_Effect = Parms.Sound_Effect;

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.GetAddRotationToParticles
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Add_Rotation_to_Particles                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Effect_Circular_C::GetAddRotationToParticles(bool* Add_Rotation_to_Particles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "GetAddRotationToParticles");

	Params::UWB_Effect_Circular_C_GetAddRotationToParticles_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Add_Rotation_to_Particles != nullptr)
		*Add_Rotation_to_Particles = Parms.Add_Rotation_to_Particles;

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.GetParticleSpread
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Particle_Spread                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::GetParticleSpread(float* Particle_Spread)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "GetParticleSpread");

	Params::UWB_Effect_Circular_C_GetParticleSpread_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Particle_Spread != nullptr)
		*Particle_Spread = Parms.Particle_Spread;

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.FindMinSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWB_Effect_Circular_C::FindMinSize(const struct FVector2D& Size, bool Temp_bool_Variable, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "FindMinSize");

	Params::UWB_Effect_Circular_C_FindMinSize_Params Parms{};

	Parms.Size = Size;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.AddAttributes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetEffectShear_Effect_Shear                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEffectAngle_Effect_Angle                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetEffectTexture_Custom_Effect_Texture                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetEffectColor_Effect_Color                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetEffectTranslation_Transition                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetEffectScale_EffectScale                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::AddAttributes(class UImage* Image, const struct FVector2D& CallFunc_GetEffectShear_Effect_Shear, float CallFunc_GetEffectAngle_Effect_Angle, class UObject* CallFunc_GetEffectTexture_Custom_Effect_Texture, const struct FLinearColor& CallFunc_GetEffectColor_Effect_Color, const struct FVector2D& CallFunc_GetEffectTranslation_Transition, const struct FVector2D& CallFunc_GetEffectScale_EffectScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "AddAttributes");

	Params::UWB_Effect_Circular_C_AddAttributes_Params Parms{};

	Parms.Image = Image;
	Parms.CallFunc_GetEffectShear_Effect_Shear = CallFunc_GetEffectShear_Effect_Shear;
	Parms.CallFunc_GetEffectAngle_Effect_Angle = CallFunc_GetEffectAngle_Effect_Angle;
	Parms.CallFunc_GetEffectTexture_Custom_Effect_Texture = CallFunc_GetEffectTexture_Custom_Effect_Texture;
	Parms.CallFunc_GetEffectColor_Effect_Color = CallFunc_GetEffectColor_Effect_Color;
	Parms.CallFunc_GetEffectTranslation_Transition = CallFunc_GetEffectTranslation_Transition;
	Parms.CallFunc_GetEffectScale_EffectScale = CallFunc_GetEffectScale_EffectScale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.GetNumParticles
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              NumParticles                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::GetNumParticles(int32* NumParticles, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "GetNumParticles");

	Params::UWB_Effect_Circular_C_GetNumParticles_Params Parms{};

	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NumParticles != nullptr)
		*NumParticles = Parms.NumParticles;

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.IsEffectTypeParticle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// enum class EEffectType             CallFunc_GetEffectType_Effect_Texture_Type                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_Effect_Circular_C::IsEffectTypeParticle(enum class EEffectType CallFunc_GetEffectType_Effect_Texture_Type, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "IsEffectTypeParticle");

	Params::UWB_Effect_Circular_C_IsEffectTypeParticle_Params Parms{};

	Parms.CallFunc_GetEffectType_Effect_Texture_Type = CallFunc_GetEffectType_Effect_Texture_Type;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.GetPlaybackSpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Playback_Speed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::GetPlaybackSpeed(float* Playback_Speed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "GetPlaybackSpeed");

	Params::UWB_Effect_Circular_C_GetPlaybackSpeed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Playback_Speed != nullptr)
		*Playback_Speed = Parms.Playback_Speed;

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.GetEffectAngle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Effect_Angle                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::GetEffectAngle(float* Effect_Angle, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "GetEffectAngle");

	Params::UWB_Effect_Circular_C_GetEffectAngle_Params Parms{};

	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Effect_Angle != nullptr)
		*Effect_Angle = Parms.Effect_Angle;

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.GetEffectShear
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   Effect_Shear                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::GetEffectShear(struct FVector2D* Effect_Shear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "GetEffectShear");

	Params::UWB_Effect_Circular_C_GetEffectShear_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Effect_Shear != nullptr)
		*Effect_Shear = std::move(Parms.Effect_Shear);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.IsTriggeredAlwaysOnSpecificPercentValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// enum class ETriggerMethod          CallFunc_GetTriggerMethod_Trigger                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_Effect_Circular_C::IsTriggeredAlwaysOnSpecificPercentValue(enum class ETriggerMethod CallFunc_GetTriggerMethod_Trigger, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "IsTriggeredAlwaysOnSpecificPercentValue");

	Params::UWB_Effect_Circular_C_IsTriggeredAlwaysOnSpecificPercentValue_Params Parms{};

	Parms.CallFunc_GetTriggerMethod_Trigger = CallFunc_GetTriggerMethod_Trigger;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.IsTriggerSpecificPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// enum class ETriggerMethod          CallFunc_GetTriggerMethod_Trigger                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_Effect_Circular_C::IsTriggerSpecificPercent(enum class ETriggerMethod CallFunc_GetTriggerMethod_Trigger, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "IsTriggerSpecificPercent");

	Params::UWB_Effect_Circular_C_IsTriggerSpecificPercent_Params Parms{};

	Parms.CallFunc_GetTriggerMethod_Trigger = CallFunc_GetTriggerMethod_Trigger;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.SwitchEffectType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::SwitchEffectType(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "SwitchEffectType");

	Params::UWB_Effect_Circular_C_SwitchEffectType_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.Anim_HighlightLoop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               StartStop                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              PlaybackSpeed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::Anim_HighlightLoop(bool StartStop, float PlaybackSpeed, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, enum class EUMGSequencePlayMode K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "Anim_HighlightLoop");

	Params::UWB_Effect_Circular_C_Anim_HighlightLoop_Params Parms{};

	Parms.StartStop = StartStop;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.Anim_Highlight2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PlaybackSpeed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::Anim_Highlight2(float PlaybackSpeed, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, enum class EUMGSequencePlayMode K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "Anim_Highlight2");

	Params::UWB_Effect_Circular_C_Anim_Highlight2_Params Parms{};

	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.Anim_Highlight1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PlaybackSpeed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::Anim_Highlight1(float PlaybackSpeed, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, enum class EUMGSequencePlayMode K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "Anim_Highlight1");

	Params::UWB_Effect_Circular_C_Anim_Highlight1_Params Parms{};

	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.GetEffectColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Effect_Color                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::GetEffectColor(struct FLinearColor* Effect_Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "GetEffectColor");

	Params::UWB_Effect_Circular_C_GetEffectColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Effect_Color != nullptr)
		*Effect_Color = std::move(Parms.Effect_Color);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.GetEffectScale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   EffectScale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::GetEffectScale(struct FVector2D* EffectScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "GetEffectScale");

	Params::UWB_Effect_Circular_C_GetEffectScale_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EffectScale != nullptr)
		*EffectScale = std::move(Parms.EffectScale);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.Anim_Fade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FadeIn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              PlaybackSpeed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::Anim_Fade(bool FadeIn, float PlaybackSpeed, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, enum class EUMGSequencePlayMode K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "Anim_Fade");

	Params::UWB_Effect_Circular_C_Anim_Fade_Params Parms{};

	Parms.FadeIn = FadeIn;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.IsTriggeredAlways
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// enum class ETriggerMethod          CallFunc_GetTriggerMethod_Trigger                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_Effect_Circular_C::IsTriggeredAlways(enum class ETriggerMethod CallFunc_GetTriggerMethod_Trigger, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "IsTriggeredAlways");

	Params::UWB_Effect_Circular_C_IsTriggeredAlways_Params Parms{};

	Parms.CallFunc_GetTriggerMethod_Trigger = CallFunc_GetTriggerMethod_Trigger;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.GetEffectTexture
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     Custom_Effect_Texture                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEffectType             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEffectType             CallFunc_GetEffectType_Effect_Texture_Type                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::GetEffectTexture(class UObject** Custom_Effect_Texture, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* Temp_object_Variable_2, class UObject* Temp_object_Variable_3, class UObject* Temp_object_Variable_4, bool Temp_bool_Variable, class UObject* Temp_object_Variable_5, enum class EEffectType Temp_byte_Variable, enum class EEffectType CallFunc_GetEffectType_Effect_Texture_Type, class UObject* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, class UObject* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "GetEffectTexture");

	Params::UWB_Effect_Circular_C_GetEffectTexture_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetEffectType_Effect_Texture_Type = CallFunc_GetEffectType_Effect_Texture_Type;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Custom_Effect_Texture != nullptr)
		*Custom_Effect_Texture = Parms.Custom_Effect_Texture;

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.GetEffectType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EEffectType             Effect_Texture_Type                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::GetEffectType(enum class EEffectType* Effect_Texture_Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "GetEffectType");

	Params::UWB_Effect_Circular_C_GetEffectType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Effect_Texture_Type != nullptr)
		*Effect_Texture_Type = Parms.Effect_Texture_Type;

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.GetEffectTranslation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   Transition                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::GetEffectTranslation(struct FVector2D* Transition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "GetEffectTranslation");

	Params::UWB_Effect_Circular_C_GetEffectTranslation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Transition != nullptr)
		*Transition = std::move(Parms.Transition);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.GetSpecificPercentValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Specific_Percent_Value                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::GetSpecificPercentValue(float* Specific_Percent_Value, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "GetSpecificPercentValue");

	Params::UWB_Effect_Circular_C_GetSpecificPercentValue_Params Parms{};

	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Specific_Percent_Value != nullptr)
		*Specific_Percent_Value = Parms.Specific_Percent_Value;

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.GetTriggerMethod
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ETriggerMethod          Trigger                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::GetTriggerMethod(enum class ETriggerMethod* Trigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "GetTriggerMethod");

	Params::UWB_Effect_Circular_C_GetTriggerMethod_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Trigger != nullptr)
		*Trigger = Parms.Trigger;

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.SetSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Thickness                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::SetSize(float Size, float Thickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "SetSize");

	Params::UWB_Effect_Circular_C_SetSize_Params Parms{};

	Parms.Size = Size;
	Parms.Thickness = Thickness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.AddEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Effects                  Effect                                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::AddEffect(const struct FS_Effects& Effect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "AddEffect");

	Params::UWB_Effect_Circular_C_AddEffect_Params Parms{};

	Parms.Effect = Effect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.StartEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Effect_Circular_C::StartEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "StartEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.StopEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Effect_Circular_C::StopEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "StopEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "Tick");

	Params::UWB_Effect_Circular_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.TriggerEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Effect_Circular_C::TriggerEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "TriggerEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.AddEffectType
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Effect_Circular_C::AddEffectType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "AddEffectType");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.EventPreConstruct
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Effect_Circular_C::EventPreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "EventPreConstruct");

	Params::UWB_Effect_Circular_C_EventPreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_Effect_Circular_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.CreateParticle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumParticles                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::CreateParticle(int32 NumParticles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "CreateParticle");

	Params::UWB_Effect_Circular_C_CreateParticle_Params Parms{};

	Parms.NumParticles = NumParticles;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.ClearParticles
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Effect_Circular_C::ClearParticles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "ClearParticles");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.OnAnimationFinished_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Effect_Circular_C::OnAnimationFinished_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "OnAnimationFinished_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.GetProgressBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBarCircular_C*      ProgressBar                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::GetProgressBar(class UProgressBarCircular_C* ProgressBar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "GetProgressBar");

	Params::UWB_Effect_Circular_C_GetProgressBar_Params Parms{};

	Parms.ProgressBar = ProgressBar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.UpdatePercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::UpdatePercent(float Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "UpdatePercent");

	Params::UWB_Effect_Circular_C_UpdatePercent_Params Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.OnAudioFinished_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Effect_Circular_C::OnAudioFinished_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "OnAudioFinished_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.ExecuteUbergraph_WB_Effect_Circular
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_5                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_6                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUseParticleStretched_Use_Stretched_Particle          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelWidget*                K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Particle_C*              K2Node_DynamicCast_AsWB_Particle                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUseParticleStretched_Use_Stretched_Particle_1        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_7                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_8                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_9                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetSpecificPercentValue_Specific_Percent_Value          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSpecificPercentValue_Specific_Percent_Value_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_Particle_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_10                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetSpecificPercentValue_Specific_Percent_Value_2        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetSpecificPercentValue_Specific_Percent_Value_3        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetSpecificPercentValue_Specific_Percent_Value_4        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_4                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_11                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Size                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Thickness                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_Effects                  K2Node_CustomEvent_Effect                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEffectType             CallFunc_GetEffectType_Effect_Texture_Type                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsDesignTime                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_12                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_NumParticles                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetEffectTexture_Custom_Effect_Texture                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlaybackSpeed_Playback_Speed                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetEffectColor_Effect_Color                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetEffectScale_EffectScale                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetEffectTranslation_Transition                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEffectAngle_Effect_Angle                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetEffectShear_Effect_Shear                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETriggerMethod          CallFunc_GetTriggerMethod_Trigger                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetParticleSpread_Particle_Spread                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAddRotationToParticles_Add_Rotation_to_Particles     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  CallFunc_GetSoundEffect_Sound_Effect                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEffectTypeSoundEffect_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetSoundVolume_Sound_Volume_Multiplier                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEffectTypeSoundEffectLooped_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_CreateSound2D_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEffectTypeSoundEffect_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEffectTypeSoundEffectLooped_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_13                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDecayTime_Decay_Time                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetEffectColor_Effect_Color_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEffectTypeProgressChangeColor_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUseParticleStretched_Use_Stretched_Particle_2        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUseParticleStretched_Use_Stretched_Particle_3        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEffectTypeParticle_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_14                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetSpecificPercentValue_Specific_Percent_Value_5        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTriggerSpecificPercent_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEffectTypeSoundEffectLooped_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_15                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_16                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETriggerMethod          CallFunc_GetTriggerMethod_Trigger_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUseParticleStretched_Use_Stretched_Particle_4        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOverlay*                    K2Node_Select_Default_6                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_17                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumParticles_NumParticles                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEffectTypeParticle_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_18                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UProgressBarCircular_C*      K2Node_CustomEvent_ProgressBar                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Percent                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_19                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_Constant_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_20                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_20                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default_10                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEffectTypeSoundEffect_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEffectTypeParticle_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelWidget*                K2Node_Select_Default_11                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEffectTypeSoundEffectLooped_ReturnValue_3             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Particle_C*              K2Node_DynamicCast_AsWB_Particle_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEffectTypeSoundEffect_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEffectTypeProgressChangeColor_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTriggeredAlwaysOnSpecificPercentValue_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTriggeredAlways_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_21                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_21                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Effect_Circular_C::ExecuteUbergraph_WB_Effect_Circular(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_4, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_5, bool Temp_bool_IsClosed_Variable_3, float Temp_float_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_6, int32 Temp_int_Variable_2, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_IsClosed_Variable_4, bool CallFunc_GetUseParticleStretched_Use_Stretched_Particle, class UPanelWidget* K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWB_Particle_C* K2Node_DynamicCast_AsWB_Particle, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_IsClosed_Variable_5, bool Temp_bool_IsClosed_Variable_6, bool CallFunc_GetUseParticleStretched_Use_Stretched_Particle_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_IsClosed_Variable_7, bool Temp_bool_Has_Been_Initd_Variable_7, bool Temp_bool_Has_Been_Initd_Variable_8, bool Temp_bool_IsClosed_Variable_8, bool Temp_bool_Has_Been_Initd_Variable_9, bool Temp_bool_Variable_2, bool Temp_bool_IsClosed_Variable_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_GetSpecificPercentValue_Specific_Percent_Value, float CallFunc_GetSpecificPercentValue_Specific_Percent_Value_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class UWB_Particle_C* CallFunc_Create_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_10, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, float CallFunc_GetSpecificPercentValue_Specific_Percent_Value_2, float Temp_float_Variable_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_2, float CallFunc_GetSpecificPercentValue_Specific_Percent_Value_3, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_3, bool Temp_bool_IsClosed_Variable_10, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_GetSpecificPercentValue_Specific_Percent_Value_4, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_4, bool Temp_bool_Variable_4, bool CallFunc_Less_FloatFloat_ReturnValue_2, bool Temp_bool_Variable_5, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_3, bool Temp_bool_Variable_6, bool CallFunc_Less_FloatFloat_ReturnValue_4, bool Temp_bool_Has_Been_Initd_Variable_11, bool Temp_bool_Variable_7, float K2Node_CustomEvent_Size, float K2Node_CustomEvent_Thickness, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, const struct FS_Effects& K2Node_CustomEvent_Effect, float K2Node_Select_Default_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class EEffectType CallFunc_GetEffectType_Effect_Texture_Type, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_CustomEvent_IsDesignTime, bool Temp_bool_IsClosed_Variable_11, bool Temp_bool_Has_Been_Initd_Variable_12, bool Temp_bool_IsClosed_Variable_12, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_CustomEvent_NumParticles, bool CallFunc_LessEqual_IntInt_ReturnValue_1, class UObject* CallFunc_GetEffectTexture_Custom_Effect_Texture, float CallFunc_GetPlaybackSpeed_Playback_Speed, const struct FLinearColor& CallFunc_GetEffectColor_Effect_Color, const struct FVector2D& CallFunc_GetEffectScale_EffectScale, const struct FVector2D& CallFunc_GetEffectTranslation_Transition, float CallFunc_GetEffectAngle_Effect_Angle, const struct FVector2D& CallFunc_GetEffectShear_Effect_Shear, int32 Temp_int_Variable_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, enum class ETriggerMethod CallFunc_GetTriggerMethod_Trigger, float CallFunc_GetParticleSpread_Particle_Spread, bool CallFunc_GetAddRotationToParticles_Add_Rotation_to_Particles, class USoundBase* CallFunc_GetSoundEffect_Sound_Effect, bool CallFunc_IsEffectTypeSoundEffect_ReturnValue, float CallFunc_GetSoundVolume_Sound_Volume_Multiplier, bool CallFunc_IsEffectTypeSoundEffectLooped_ReturnValue, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsEffectTypeSoundEffect_ReturnValue_1, bool CallFunc_IsEffectTypeSoundEffectLooped_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_13, bool CallFunc_BooleanOR_ReturnValue_1, float CallFunc_GetDecayTime_Decay_Time, const struct FLinearColor& CallFunc_GetEffectColor_Effect_Color_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsEffectTypeProgressChangeColor_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_5, float CallFunc_Divide_FloatFloat_ReturnValue, float K2Node_Select_Default_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, bool CallFunc_GetUseParticleStretched_Use_Stretched_Particle_2, bool CallFunc_GetUseParticleStretched_Use_Stretched_Particle_3, bool Temp_bool_IsClosed_Variable_13, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsEffectTypeParticle_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_14, float CallFunc_GetSpecificPercentValue_Specific_Percent_Value_5, bool CallFunc_IsTriggerSpecificPercent_ReturnValue, float K2Node_Select_Default_3, int32 Temp_int_Variable_4, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, bool Temp_bool_IsClosed_Variable_14, bool Temp_bool_IsClosed_Variable_15, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool Temp_bool_Variable_8, bool CallFunc_IsEffectTypeSoundEffectLooped_ReturnValue_2, int32 K2Node_Select_Default_4, float K2Node_Select_Default_5, bool Temp_bool_Has_Been_Initd_Variable_15, bool Temp_bool_Has_Been_Initd_Variable_16, bool Temp_bool_IsClosed_Variable_16, bool Temp_bool_IsClosed_Variable_17, bool Temp_bool_IsClosed_Variable_18, enum class ETriggerMethod CallFunc_GetTriggerMethod_Trigger_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_GetUseParticleStretched_Use_Stretched_Particle_4, bool Temp_bool_Variable_9, class UOverlay* K2Node_Select_Default_6, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_17, bool CallFunc_IsAnimationPlayingForward_ReturnValue, bool Temp_bool_Variable_10, bool CallFunc_Not_PreBool_ReturnValue_3, bool K2Node_Select_Default_7, bool Temp_bool_IsClosed_Variable_19, int32 CallFunc_GetNumParticles_NumParticles, bool CallFunc_IsEffectTypeParticle_ReturnValue_1, bool Temp_bool_Variable_11, bool Temp_bool_Has_Been_Initd_Variable_18, class UProgressBarCircular_C* K2Node_CustomEvent_ProgressBar, float K2Node_CustomEvent_Percent, float K2Node_Select_Default_8, bool Temp_bool_Has_Been_Initd_Variable_19, float CallFunc_FInterpTo_Constant_ReturnValue, float K2Node_Select_Default_9, bool Temp_bool_IsClosed_Variable_20, bool CallFunc_Not_PreBool_ReturnValue_4, bool Temp_bool_Has_Been_Initd_Variable_20, bool Temp_bool_Variable_12, bool K2Node_Select_Default_10, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsEffectTypeSoundEffect_ReturnValue_2, bool Temp_bool_Variable_13, bool CallFunc_IsEffectTypeParticle_ReturnValue_2, class UPanelWidget* K2Node_Select_Default_11, bool CallFunc_IsEffectTypeSoundEffectLooped_ReturnValue_3, class UWidget* CallFunc_GetChildAt_ReturnValue_1, int32 CallFunc_GetChildrenCount_ReturnValue_1, class UWB_Particle_C* K2Node_DynamicCast_AsWB_Particle_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_LessEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsEffectTypeSoundEffect_ReturnValue_3, bool CallFunc_IsEffectTypeProgressChangeColor_ReturnValue_1, bool CallFunc_IsTriggeredAlwaysOnSpecificPercentValue_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_IsTriggeredAlways_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_21, bool Temp_bool_IsClosed_Variable_21)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "ExecuteUbergraph_WB_Effect_Circular");

	Params::UWB_Effect_Circular_C_ExecuteUbergraph_WB_Effect_Circular_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.Temp_bool_Has_Been_Initd_Variable_4 = Temp_bool_Has_Been_Initd_Variable_4;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.Temp_bool_Has_Been_Initd_Variable_5 = Temp_bool_Has_Been_Initd_Variable_5;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_6 = Temp_bool_Has_Been_Initd_Variable_6;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_bool_IsClosed_Variable_4 = Temp_bool_IsClosed_Variable_4;
	Parms.CallFunc_GetUseParticleStretched_Use_Stretched_Particle = CallFunc_GetUseParticleStretched_Use_Stretched_Particle;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_DynamicCast_AsWB_Particle = K2Node_DynamicCast_AsWB_Particle;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable_5 = Temp_bool_IsClosed_Variable_5;
	Parms.Temp_bool_IsClosed_Variable_6 = Temp_bool_IsClosed_Variable_6;
	Parms.CallFunc_GetUseParticleStretched_Use_Stretched_Particle_1 = CallFunc_GetUseParticleStretched_Use_Stretched_Particle_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_IsClosed_Variable_7 = Temp_bool_IsClosed_Variable_7;
	Parms.Temp_bool_Has_Been_Initd_Variable_7 = Temp_bool_Has_Been_Initd_Variable_7;
	Parms.Temp_bool_Has_Been_Initd_Variable_8 = Temp_bool_Has_Been_Initd_Variable_8;
	Parms.Temp_bool_IsClosed_Variable_8 = Temp_bool_IsClosed_Variable_8;
	Parms.Temp_bool_Has_Been_Initd_Variable_9 = Temp_bool_Has_Been_Initd_Variable_9;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_IsClosed_Variable_9 = Temp_bool_IsClosed_Variable_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetSpecificPercentValue_Specific_Percent_Value = CallFunc_GetSpecificPercentValue_Specific_Percent_Value;
	Parms.CallFunc_GetSpecificPercentValue_Specific_Percent_Value_1 = CallFunc_GetSpecificPercentValue_Specific_Percent_Value_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Has_Been_Initd_Variable_10 = Temp_bool_Has_Been_Initd_Variable_10;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_1 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetSpecificPercentValue_Specific_Percent_Value_2 = CallFunc_GetSpecificPercentValue_Specific_Percent_Value_2;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_2 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetSpecificPercentValue_Specific_Percent_Value_3 = CallFunc_GetSpecificPercentValue_Specific_Percent_Value_3;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_3 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_3;
	Parms.Temp_bool_IsClosed_Variable_10 = Temp_bool_IsClosed_Variable_10;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetSpecificPercentValue_Specific_Percent_Value_4 = CallFunc_GetSpecificPercentValue_Specific_Percent_Value_4;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_4 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_4;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_2 = CallFunc_Less_FloatFloat_ReturnValue_2;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_3 = CallFunc_Less_FloatFloat_ReturnValue_3;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_4 = CallFunc_Less_FloatFloat_ReturnValue_4;
	Parms.Temp_bool_Has_Been_Initd_Variable_11 = Temp_bool_Has_Been_Initd_Variable_11;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.K2Node_CustomEvent_Size = K2Node_CustomEvent_Size;
	Parms.K2Node_CustomEvent_Thickness = K2Node_CustomEvent_Thickness;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_Effect = K2Node_CustomEvent_Effect;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetEffectType_Effect_Texture_Type = CallFunc_GetEffectType_Effect_Texture_Type;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_IsDesignTime = K2Node_CustomEvent_IsDesignTime;
	Parms.Temp_bool_IsClosed_Variable_11 = Temp_bool_IsClosed_Variable_11;
	Parms.Temp_bool_Has_Been_Initd_Variable_12 = Temp_bool_Has_Been_Initd_Variable_12;
	Parms.Temp_bool_IsClosed_Variable_12 = Temp_bool_IsClosed_Variable_12;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_NumParticles = K2Node_CustomEvent_NumParticles;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetEffectTexture_Custom_Effect_Texture = CallFunc_GetEffectTexture_Custom_Effect_Texture;
	Parms.CallFunc_GetPlaybackSpeed_Playback_Speed = CallFunc_GetPlaybackSpeed_Playback_Speed;
	Parms.CallFunc_GetEffectColor_Effect_Color = CallFunc_GetEffectColor_Effect_Color;
	Parms.CallFunc_GetEffectScale_EffectScale = CallFunc_GetEffectScale_EffectScale;
	Parms.CallFunc_GetEffectTranslation_Transition = CallFunc_GetEffectTranslation_Transition;
	Parms.CallFunc_GetEffectAngle_Effect_Angle = CallFunc_GetEffectAngle_Effect_Angle;
	Parms.CallFunc_GetEffectShear_Effect_Shear = CallFunc_GetEffectShear_Effect_Shear;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_GetTriggerMethod_Trigger = CallFunc_GetTriggerMethod_Trigger;
	Parms.CallFunc_GetParticleSpread_Particle_Spread = CallFunc_GetParticleSpread_Particle_Spread;
	Parms.CallFunc_GetAddRotationToParticles_Add_Rotation_to_Particles = CallFunc_GetAddRotationToParticles_Add_Rotation_to_Particles;
	Parms.CallFunc_GetSoundEffect_Sound_Effect = CallFunc_GetSoundEffect_Sound_Effect;
	Parms.CallFunc_IsEffectTypeSoundEffect_ReturnValue = CallFunc_IsEffectTypeSoundEffect_ReturnValue;
	Parms.CallFunc_GetSoundVolume_Sound_Volume_Multiplier = CallFunc_GetSoundVolume_Sound_Volume_Multiplier;
	Parms.CallFunc_IsEffectTypeSoundEffectLooped_ReturnValue = CallFunc_IsEffectTypeSoundEffectLooped_ReturnValue;
	Parms.CallFunc_CreateSound2D_ReturnValue = CallFunc_CreateSound2D_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsEffectTypeSoundEffect_ReturnValue_1 = CallFunc_IsEffectTypeSoundEffect_ReturnValue_1;
	Parms.CallFunc_IsEffectTypeSoundEffectLooped_ReturnValue_1 = CallFunc_IsEffectTypeSoundEffectLooped_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_13 = Temp_bool_Has_Been_Initd_Variable_13;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_GetDecayTime_Decay_Time = CallFunc_GetDecayTime_Decay_Time;
	Parms.CallFunc_GetEffectColor_Effect_Color_1 = CallFunc_GetEffectColor_Effect_Color_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsEffectTypeProgressChangeColor_ReturnValue = CallFunc_IsEffectTypeProgressChangeColor_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_5 = CallFunc_Less_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_GetUseParticleStretched_Use_Stretched_Particle_2 = CallFunc_GetUseParticleStretched_Use_Stretched_Particle_2;
	Parms.CallFunc_GetUseParticleStretched_Use_Stretched_Particle_3 = CallFunc_GetUseParticleStretched_Use_Stretched_Particle_3;
	Parms.Temp_bool_IsClosed_Variable_13 = Temp_bool_IsClosed_Variable_13;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_IsEffectTypeParticle_ReturnValue = CallFunc_IsEffectTypeParticle_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_14 = Temp_bool_Has_Been_Initd_Variable_14;
	Parms.CallFunc_GetSpecificPercentValue_Specific_Percent_Value_5 = CallFunc_GetSpecificPercentValue_Specific_Percent_Value_5;
	Parms.CallFunc_IsTriggerSpecificPercent_ReturnValue = CallFunc_IsTriggerSpecificPercent_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable_14 = Temp_bool_IsClosed_Variable_14;
	Parms.Temp_bool_IsClosed_Variable_15 = Temp_bool_IsClosed_Variable_15;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.CallFunc_IsEffectTypeSoundEffectLooped_ReturnValue_2 = CallFunc_IsEffectTypeSoundEffectLooped_ReturnValue_2;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.Temp_bool_Has_Been_Initd_Variable_15 = Temp_bool_Has_Been_Initd_Variable_15;
	Parms.Temp_bool_Has_Been_Initd_Variable_16 = Temp_bool_Has_Been_Initd_Variable_16;
	Parms.Temp_bool_IsClosed_Variable_16 = Temp_bool_IsClosed_Variable_16;
	Parms.Temp_bool_IsClosed_Variable_17 = Temp_bool_IsClosed_Variable_17;
	Parms.Temp_bool_IsClosed_Variable_18 = Temp_bool_IsClosed_Variable_18;
	Parms.CallFunc_GetTriggerMethod_Trigger_1 = CallFunc_GetTriggerMethod_Trigger_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetUseParticleStretched_Use_Stretched_Particle_4 = CallFunc_GetUseParticleStretched_Use_Stretched_Particle_4;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_17 = Temp_bool_Has_Been_Initd_Variable_17;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;
	Parms.Temp_bool_Variable_10 = Temp_bool_Variable_10;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.Temp_bool_IsClosed_Variable_19 = Temp_bool_IsClosed_Variable_19;
	Parms.CallFunc_GetNumParticles_NumParticles = CallFunc_GetNumParticles_NumParticles;
	Parms.CallFunc_IsEffectTypeParticle_ReturnValue_1 = CallFunc_IsEffectTypeParticle_ReturnValue_1;
	Parms.Temp_bool_Variable_11 = Temp_bool_Variable_11;
	Parms.Temp_bool_Has_Been_Initd_Variable_18 = Temp_bool_Has_Been_Initd_Variable_18;
	Parms.K2Node_CustomEvent_ProgressBar = K2Node_CustomEvent_ProgressBar;
	Parms.K2Node_CustomEvent_Percent = K2Node_CustomEvent_Percent;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.Temp_bool_Has_Been_Initd_Variable_19 = Temp_bool_Has_Been_Initd_Variable_19;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.Temp_bool_IsClosed_Variable_20 = Temp_bool_IsClosed_Variable_20;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.Temp_bool_Has_Been_Initd_Variable_20 = Temp_bool_Has_Been_Initd_Variable_20;
	Parms.Temp_bool_Variable_12 = Temp_bool_Variable_12;
	Parms.K2Node_Select_Default_10 = K2Node_Select_Default_10;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_IsEffectTypeSoundEffect_ReturnValue_2 = CallFunc_IsEffectTypeSoundEffect_ReturnValue_2;
	Parms.Temp_bool_Variable_13 = Temp_bool_Variable_13;
	Parms.CallFunc_IsEffectTypeParticle_ReturnValue_2 = CallFunc_IsEffectTypeParticle_ReturnValue_2;
	Parms.K2Node_Select_Default_11 = K2Node_Select_Default_11;
	Parms.CallFunc_IsEffectTypeSoundEffectLooped_ReturnValue_3 = CallFunc_IsEffectTypeSoundEffectLooped_ReturnValue_3;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.CallFunc_GetChildrenCount_ReturnValue_1 = CallFunc_GetChildrenCount_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWB_Particle_1 = K2Node_DynamicCast_AsWB_Particle_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_2 = CallFunc_LessEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsEffectTypeSoundEffect_ReturnValue_3 = CallFunc_IsEffectTypeSoundEffect_ReturnValue_3;
	Parms.CallFunc_IsEffectTypeProgressChangeColor_ReturnValue_1 = CallFunc_IsEffectTypeProgressChangeColor_ReturnValue_1;
	Parms.CallFunc_IsTriggeredAlwaysOnSpecificPercentValue_ReturnValue = CallFunc_IsTriggeredAlwaysOnSpecificPercentValue_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_IsTriggeredAlways_ReturnValue = CallFunc_IsTriggeredAlways_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_21 = Temp_bool_Has_Been_Initd_Variable_21;
	Parms.Temp_bool_IsClosed_Variable_21 = Temp_bool_IsClosed_Variable_21;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.StopProgressChangeColor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Effect_Circular_C::StopProgressChangeColor__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "StopProgressChangeColor__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Effect_Circular.WB_Effect_Circular_C.StartProgressChangeColor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Effect_Circular_C::StartProgressChangeColor__DelegateSignature(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Effect_Circular_C", "StartProgressChangeColor__DelegateSignature");

	Params::UWB_Effect_Circular_C_StartProgressChangeColor__DelegateSignature_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}

}


