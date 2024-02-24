#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Chameleon.Chameleon_C
// (Actor)

class UClass* AChameleon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Chameleon_C");

	return Clss;
}


// Chameleon_C Chameleon.Default__Chameleon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChameleon_C* AChameleon_C::GetDefaultObj()
{
	static class AChameleon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChameleon_C*>(AChameleon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Chameleon.Chameleon_C.Create Effect Material Instance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterial*                   Material                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::Create_Effect_Material_Instance(class UMaterial* Material, class UMaterialInstanceDynamic*& Instance, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Create Effect Material Instance");

	Params::AChameleon_C_Create_Effect_Material_Instance_Params Parms{};

	Parms.Material = Material;
	Parms.Instance = Instance;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Mojo Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::Mojo_Func(bool IsEnabled, float CallFunc_Conv_BoolToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Mojo Func");

	Params::AChameleon_C_Mojo_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Pyramid Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::Pyramid_Func(bool IsEnabled, float CallFunc_Conv_BoolToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Pyramid Func");

	Params::AChameleon_C_Pyramid_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Zone Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Zone_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Zone Func");

	Params::AChameleon_C_Zone_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Lens Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Lens_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Lens Func");

	Params::AChameleon_C_Lens_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Grid Cell Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::Grid_Cell_Func(bool IsEnabled, float CallFunc_Conv_BoolToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Grid Cell Func");

	Params::AChameleon_C_Grid_Cell_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Haunted Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Haunted_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Haunted Func");

	Params::AChameleon_C_Haunted_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Screen Fire Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::Screen_Fire_Func(bool IsEnabled, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Screen Fire Func");

	Params::AChameleon_C_Screen_Fire_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Selective Color Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Selective_Color_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Selective Color Func");

	Params::AChameleon_C_Selective_Color_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Melted World Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::Melted_World_Func(bool IsEnabled, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Melted World Func");

	Params::AChameleon_C_Melted_World_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Hazy Lights Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Hazy_Lights_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Hazy Lights Func");

	Params::AChameleon_C_Hazy_Lights_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Disco Ball Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::Disco_Ball_Func(bool IsEnabled, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Disco Ball Func");

	Params::AChameleon_C_Disco_Ball_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Camera Shake Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Camera_Shake_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Camera Shake Func");

	Params::AChameleon_C_Camera_Shake_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Colored AO Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Colored_AO_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Colored AO Func");

	Params::AChameleon_C_Colored_AO_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Infected Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Infected_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Infected Func");

	Params::AChameleon_C_Infected_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Actor Featurette Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::Actor_Featurette_Func(bool IsEnabled, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Actor Featurette Func");

	Params::AChameleon_C_Actor_Featurette_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Set Advanced Effect Features (No Custom Depth)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAdvancedEffectFeaturesNoCustomDepthFeatures                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterial*                   Material                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Dynamic_Material_Instance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBlendableInterface>CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_StringToFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::Set_Advanced_Effect_Features__No_Custom_Depth_(const struct FAdvancedEffectFeaturesNoCustomDepth& Features, class UMaterial* Material, class UMaterialInstanceDynamic* Dynamic_Material_Instance, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, float CallFunc_Conv_StringToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Set Advanced Effect Features (No Custom Depth)");

	Params::AChameleon_C_Set_Advanced_Effect_Features__No_Custom_Depth__Params Parms{};

	Parms.Features = Features;
	Parms.Material = Material;
	Parms.Dynamic_Material_Instance = Dynamic_Material_Instance;
	Parms.CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput = CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToFloat_ReturnValue = CallFunc_Conv_StringToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Set Advanced Effect Features
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAdvancedEffectFeatures     Features                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterial*                   Material                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Dynamic_Material_Instance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBlendableInterface>CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_StringToFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::Set_Advanced_Effect_Features(const struct FAdvancedEffectFeatures& Features, class UMaterial* Material, class UMaterialInstanceDynamic* Dynamic_Material_Instance, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, float CallFunc_Conv_StringToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Set Advanced Effect Features");

	Params::AChameleon_C_Set_Advanced_Effect_Features_Params Parms{};

	Parms.Features = Features;
	Parms.Material = Material;
	Parms.Dynamic_Material_Instance = Dynamic_Material_Instance;
	Parms.CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput = CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_1 = CallFunc_Conv_BoolToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_2 = CallFunc_Conv_BoolToFloat_ReturnValue_2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToFloat_ReturnValue = CallFunc_Conv_StringToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Wired Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Wired_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Wired Func");

	Params::AChameleon_C_Wired_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Sketch Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Sketch_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Sketch Func");

	Params::AChameleon_C_Sketch_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Alarm Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Alarm_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Alarm Func");

	Params::AChameleon_C_Alarm_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Digitize Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::Digitize_Func(bool IsEnabled, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Digitize Func");

	Params::AChameleon_C_Digitize_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_1 = CallFunc_Conv_VectorToLinearColor_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.World Glitch Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::World_Glitch_Func(bool IsEnabled, float CallFunc_Conv_BoolToFloat_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "World Glitch Func");

	Params::AChameleon_C_World_Glitch_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_1 = CallFunc_Conv_VectorToLinearColor_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.World Splash Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::World_Splash_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "World Splash Func");

	Params::AChameleon_C_World_Splash_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Snow Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Snow_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Snow Func");

	Params::AChameleon_C_Snow_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Letterboxing Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::Letterboxing_Func(bool IsEnabled, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Letterboxing Func");

	Params::AChameleon_C_Letterboxing_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_1 = CallFunc_Conv_BoolToFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Kaleidescope Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Kaleidescope_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Kaleidescope Func");

	Params::AChameleon_C_Kaleidescope_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.2D Transform Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::TwoD_Transform_Func(bool IsEnabled, float CallFunc_Conv_BoolToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "2D Transform Func");

	Params::AChameleon_C_TwoD_Transform_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.SetEffectPriority
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Priority                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterial*                   Material                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::SetEffectPriority(int32 Priority, class UMaterial* Material, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "SetEffectPriority");

	Params::AChameleon_C_SetEffectPriority_Params Parms{};

	Parms.Priority = Priority;
	Parms.Material = Material;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.ApplyChameleonSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AChameleon_C::ApplyChameleonSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "ApplyChameleonSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Chameleon.Chameleon_C.Custom Depth Highlighter (NC) Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Custom_Depth_Highlighter__NC__Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Custom Depth Highlighter (NC) Func");

	Params::AChameleon_C_Custom_Depth_Highlighter__NC__Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Custom Depth Highlighter Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Custom_Depth_Highlighter_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Custom Depth Highlighter Func");

	Params::AChameleon_C_Custom_Depth_Highlighter_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Neon Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Neon_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Neon Func");

	Params::AChameleon_C_Neon_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Frost Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Frost_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Frost Func");

	Params::AChameleon_C_Frost_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Anamorphic Lens Flares Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Anamorphic_Lens_Flares_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Anamorphic Lens Flares Func");

	Params::AChameleon_C_Anamorphic_Lens_Flares_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Toon Shading Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::Toon_Shading_Func(bool IsEnabled, float CallFunc_Conv_BoolToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Toon Shading Func");

	Params::AChameleon_C_Toon_Shading_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Sharpen Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Sharpen_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Sharpen Func");

	Params::AChameleon_C_Sharpen_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Screen Decals Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Screen_Decals_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Screen Decals Func");

	Params::AChameleon_C_Screen_Decals_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Screen Damage Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Screen_Damage_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Screen Damage Func");

	Params::AChameleon_C_Screen_Damage_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Magic Transitions Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Magic_Transitions_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Magic Transitions Func");

	Params::AChameleon_C_Magic_Transitions_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Drawing Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_StringToFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::Drawing_Func(bool IsEnabled, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, float CallFunc_Conv_StringToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Drawing Func");

	Params::AChameleon_C_Drawing_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToFloat_ReturnValue = CallFunc_Conv_StringToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Distance Distortion Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Distance_Distortion_Func(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Distance Distortion Func");

	Params::AChameleon_C_Distance_Distortion_Func_Params Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Sonar Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Sonar_Func(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Sonar Func");

	Params::AChameleon_C_Sonar_Func_Params Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Circles Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Circles_Func(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Circles Func");

	Params::AChameleon_C_Circles_Func_Params Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.LOOK Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLOOKCGStruct               CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::LOOK_Func(bool Condition, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FLOOKCGStruct& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "LOOK Func");

	Params::AChameleon_C_LOOK_Func_Params Parms{};

	Parms.Condition = Condition;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.TV Noise Func
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void AChameleon_C::TV_Noise_Func(bool& IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "TV Noise Func");

	Params::AChameleon_C_TV_Noise_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Tiles Func
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::Tiles_Func(bool& IsEnabled, float CallFunc_Conv_BoolToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Tiles Func");

	Params::AChameleon_C_Tiles_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Squares Func
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void AChameleon_C::Squares_Func(bool& IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Squares Func");

	Params::AChameleon_C_Squares_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Pulse Func
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void AChameleon_C::Pulse_Func(bool& IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Pulse Func");

	Params::AChameleon_C_Pulse_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Kuwahara Func
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::Kuwahara_Func(bool& IsEnabled, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Kuwahara Func");

	Params::AChameleon_C_Kuwahara_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Iridescent Func
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::Iridescent_Func(bool& IsEnabled, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Iridescent Func");

	Params::AChameleon_C_Iridescent_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Invert Func
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void AChameleon_C::Invert_Func(bool& IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Invert Func");

	Params::AChameleon_C_Invert_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Hard Emboss Func
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void AChameleon_C::Hard_Emboss_Func(bool& IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Hard Emboss Func");

	Params::AChameleon_C_Hard_Emboss_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Emboss Func
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void AChameleon_C::Emboss_Func(bool& IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Emboss Func");

	Params::AChameleon_C_Emboss_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Edge Detect Func
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void AChameleon_C::Edge_Detect_Func(bool& IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Edge Detect Func");

	Params::AChameleon_C_Edge_Detect_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.ASCII Func
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void AChameleon_C::ASCII_Func(bool& IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "ASCII Func");

	Params::AChameleon_C_ASCII_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Bleach Func
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void AChameleon_C::Bleach_Func(bool& IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Bleach Func");

	Params::AChameleon_C_Bleach_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Scratches Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Scratches_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Scratches Func");

	Params::AChameleon_C_Scratches_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Distance Fog Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Distance_Fog_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Distance Fog Func");

	Params::AChameleon_C_Distance_Fog_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Screen Waves Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Screen_Waves_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Screen Waves Func");

	Params::AChameleon_C_Screen_Waves_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Radial Blur Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::Radial_Blur_Func(bool IsEnabled, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Radial Blur Func");

	Params::AChameleon_C_Radial_Blur_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Monochrome Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Monochrome_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Monochrome Func");

	Params::AChameleon_C_Monochrome_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Hue Panner Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Hue_Panner_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Hue Panner Func");

	Params::AChameleon_C_Hue_Panner_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.MonitorFX Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::MonitorFX_Func(bool IsEnabled, float CallFunc_Conv_BoolToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "MonitorFX Func");

	Params::AChameleon_C_MonitorFX_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Glitch Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Glitch_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Glitch Func");

	Params::AChameleon_C_Glitch_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Comic Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::Comic_Func(bool IsEnabled, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Comic Func");

	Params::AChameleon_C_Comic_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Colorize Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Colorize_Func(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Colorize Func");

	Params::AChameleon_C_Colorize_Func_Params Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Blur Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::Blur_Func(bool IsEnabled, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Blur Func");

	Params::AChameleon_C_Blur_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Pixel Dissolve Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Pixel_Dissolve_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Pixel Dissolve Func");

	Params::AChameleon_C_Pixel_Dissolve_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Drug Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Drug_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Drug Func");

	Params::AChameleon_C_Drug_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Alcohol Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Alcohol_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Alcohol Func");

	Params::AChameleon_C_Alcohol_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Mosaic Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Mosaic_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Mosaic Func");

	Params::AChameleon_C_Mosaic_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Screen Drops Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChameleon_C::Screen_Drops_Func(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Screen Drops Func");

	Params::AChameleon_C_Screen_Drops_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.InitChameleon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AChameleon_C::InitChameleon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "InitChameleon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Chameleon.Chameleon_C.Channel Swapper Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_ByteToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_ByteToFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_ByteToFloat_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::Channel_Swapper_Func(bool IsEnabled, float CallFunc_Conv_ByteToFloat_ReturnValue, float CallFunc_Conv_ByteToFloat_ReturnValue_1, float CallFunc_Conv_ByteToFloat_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Channel Swapper Func");

	Params::AChameleon_C_Channel_Swapper_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_Conv_ByteToFloat_ReturnValue = CallFunc_Conv_ByteToFloat_ReturnValue;
	Parms.CallFunc_Conv_ByteToFloat_ReturnValue_1 = CallFunc_Conv_ByteToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToFloat_ReturnValue_2 = CallFunc_Conv_ByteToFloat_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.Channel Clamper Func
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void AChameleon_C::Channel_Clamper_Func(bool& IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "Channel Clamper Func");

	Params::AChameleon_C_Channel_Clamper_Func_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AChameleon_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Chameleon.Chameleon_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "ReceiveActorBeginOverlap");

	Params::AChameleon_C_ReceiveActorBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "ReceiveTick");

	Params::AChameleon_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chameleon.Chameleon_C.ExecuteUbergraph_Chameleon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChameleon_C::ExecuteUbergraph_Chameleon(int32 EntryPoint, class AActor* K2Node_Event_OtherActor, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_C", "ExecuteUbergraph_Chameleon");

	Params::AChameleon_C_ExecuteUbergraph_Chameleon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


