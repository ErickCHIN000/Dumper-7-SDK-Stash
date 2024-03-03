#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_PB_Linear_Base.WB_PB_Linear_Base_C
// (None)

class UClass* UWB_PB_Linear_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_PB_Linear_Base_C");

	return Clss;
}


// WB_PB_Linear_Base_C WB_PB_Linear_Base.Default__WB_PB_Linear_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_PB_Linear_Base_C* UWB_PB_Linear_Base_C::GetDefaultObj()
{
	static class UWB_PB_Linear_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_PB_Linear_Base_C*>(UWB_PB_Linear_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.FindFillSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetTexture2DSizeClamped_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           K2Node_DynamicCast_AsMaterial_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetTexture2DSizeClamped_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UWB_PB_Linear_Base_C::FindFillSize(class UObject* Object, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_GetTexture2DSizeClamped_ReturnValue, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_IsValidIndex_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_2, const struct FVector2D& CallFunc_GetTexture2DSizeClamped_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "FindFillSize");

	Params::UWB_PB_Linear_Base_C_FindFillSize_Params Parms{};

	Parms.Object = Object;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTexture2DSizeClamped_ReturnValue = CallFunc_GetTexture2DSizeClamped_ReturnValue;
	Parms.K2Node_DynamicCast_AsMaterial_Instance = K2Node_DynamicCast_AsMaterial_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D_1 = K2Node_DynamicCast_AsTexture_2D_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetTexture2DSizeClamped_ReturnValue_1 = CallFunc_GetTexture2DSizeClamped_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.Rotate_DesignRetainerGradient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetEffectMaterial_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::Rotate_DesignRetainerGradient(float Rotation, float CallFunc_Multiply_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "Rotate_DesignRetainerGradient");

	Params::UWB_PB_Linear_Base_C_Rotate_DesignRetainerGradient_Params Parms{};

	Parms.Rotation = Rotation;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetEffectMaterial_ReturnValue = CallFunc_GetEffectMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.Rotate_DesignTimeGradient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Angle                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::Rotate_DesignTimeGradient(float Angle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "Rotate_DesignTimeGradient");

	Params::UWB_PB_Linear_Base_C_Rotate_DesignTimeGradient_Params Parms{};

	Parms.Angle = Angle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.Mirror_DesignTimeGradient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Mirror                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetEffectMaterial_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::Mirror_DesignTimeGradient(bool Mirror, float Temp_float_Variable, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable_2, float K2Node_Select_Default, float Temp_float_Variable_3, float K2Node_Select_Default_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "Mirror_DesignTimeGradient");

	Params::UWB_PB_Linear_Base_C_Mirror_DesignTimeGradient_Params Parms{};

	Parms.Mirror = Mirror;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetEffectMaterial_ReturnValue = CallFunc_GetEffectMaterial_ReturnValue;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.GetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Percent                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPercent_Percent                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::GetPercent(float* Percent, float CallFunc_GetPercent_Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "GetPercent");

	Params::UWB_PB_Linear_Base_C_GetPercent_Params Parms{};

	Parms.CallFunc_GetPercent_Percent = CallFunc_GetPercent_Percent;

	UObject::ProcessEvent(Func, &Parms);

	if (Percent != nullptr)
		*Percent = Parms.Percent;

}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InPercent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::SetPercent(float InPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "SetPercent");

	Params::UWB_PB_Linear_Base_C_SetPercent_Params Parms{};

	Parms.InPercent = InPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetFillColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InColor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GradientPower                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     Tiling                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::SetFillColor(const struct FLinearColor& InColor, float GradientPower, enum class ESlateBrushTileType Tiling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "SetFillColor");

	Params::UWB_PB_Linear_Base_C_SetFillColor_Params Parms{};

	Parms.InColor = InColor;
	Parms.GradientPower = GradientPower;
	Parms.Tiling = Tiling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::SetSize(const struct FVector2D& Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "SetSize");

	Params::UWB_PB_Linear_Base_C_SetSize_Params Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetGradientPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::SetGradientPercent(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "SetGradientPercent");

	Params::UWB_PB_Linear_Base_C_SetGradientPercent_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetUseGradient
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseGradient                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PB_Linear_Base_C::SetUseGradient(bool UseGradient)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "SetUseGradient");

	Params::UWB_PB_Linear_Base_C_SetUseGradient_Params Parms{};

	Parms.UseGradient = UseGradient;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetFillColorMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::SetFillColorMask(class UObject* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "SetFillColorMask");

	Params::UWB_PB_Linear_Base_C_SetFillColorMask_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetGradientMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  GradientTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::SetGradientMask(class UTexture2D* GradientTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "SetGradientMask");

	Params::UWB_PB_Linear_Base_C_SetGradientMask_Params Parms{};

	Parms.GradientTexture = GradientTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.UpdateProgressChangeColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                NewColor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InterpSpeed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsChanging                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PB_Linear_Base_C::UpdateProgressChangeColor(const struct FLinearColor& NewColor, float InterpSpeed, bool IsChanging)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "UpdateProgressChangeColor");

	Params::UWB_PB_Linear_Base_C_UpdateProgressChangeColor_Params Parms{};

	Parms.NewColor = NewColor;
	Parms.InterpSpeed = InterpSpeed;
	Parms.IsChanging = IsChanging;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetBarFillType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProgressBarFillType    FillType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::SetBarFillType(enum class EProgressBarFillType FillType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "SetBarFillType");

	Params::UWB_PB_Linear_Base_C_SetBarFillType_Params Parms{};

	Parms.FillType = FillType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PB_Linear_Base_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "PreConstruct");

	Params::UWB_PB_Linear_Base_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.Reconstruct
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_PB_Linear_Base_C::Reconstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "Reconstruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_PB_Linear_Base_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.ExecuteUbergraph_WB_PB_Linear_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_FindFillSize_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetEffectMaterial_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_FindFillSize_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_UseGradient                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Value_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_CustomEvent_Size                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_InColor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_GradientPower                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     K2Node_CustomEvent_Tiling                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_InPercent                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_GradientTexture                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_CustomEvent_NewColor                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_InterpSpeed                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsChanging                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_CInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EProgressBarFillType    K2Node_CustomEvent_FillType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SubtractBrightnessValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetEffectMaterial_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRenderOpacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::ExecuteUbergraph_WB_PB_Linear_Base(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, float Temp_float_Variable, class UObject* K2Node_CustomEvent_Value, const struct FVector2D& CallFunc_FindFillSize_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue, const struct FVector2D& CallFunc_FindFillSize_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_UseGradient, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_CustomEvent_Value_1, const struct FVector2D& K2Node_CustomEvent_Size, const struct FLinearColor& K2Node_CustomEvent_InColor, float K2Node_CustomEvent_GradientPower, enum class ESlateBrushTileType K2Node_CustomEvent_Tiling, bool Temp_bool_Has_Been_Initd_Variable_1, float CallFunc_MapRangeClamped_ReturnValue, float K2Node_CustomEvent_InPercent, bool Temp_bool_IsClosed_Variable_1, float Temp_float_Variable_1, class UTexture2D* K2Node_CustomEvent_GradientTexture, bool Temp_bool_Has_Been_Initd_Variable_2, const struct FLinearColor& K2Node_CustomEvent_NewColor, float K2Node_CustomEvent_InterpSpeed, bool K2Node_CustomEvent_IsChanging, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FLinearColor& CallFunc_CInterpTo_ReturnValue, bool Temp_bool_IsClosed_Variable_2, enum class EProgressBarFillType K2Node_CustomEvent_FillType, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_Variable, bool K2Node_Event_IsDesignTime, float Temp_float_Variable_2, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool Temp_bool_Variable_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float K2Node_Select_Default, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FLinearColor& CallFunc_SubtractBrightnessValue_ReturnValue, bool Temp_bool_IsClosed_Variable_3, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_GetRenderOpacity_ReturnValue, float K2Node_Select_Default_1, float CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "ExecuteUbergraph_WB_PB_Linear_Base");

	Params::UWB_PB_Linear_Base_C_ExecuteUbergraph_WB_PB_Linear_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.CallFunc_FindFillSize_ReturnValue = CallFunc_FindFillSize_ReturnValue;
	Parms.CallFunc_GetEffectMaterial_ReturnValue = CallFunc_GetEffectMaterial_ReturnValue;
	Parms.CallFunc_FindFillSize_ReturnValue_1 = CallFunc_FindFillSize_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_UseGradient = K2Node_CustomEvent_UseGradient;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CustomEvent_Value_1 = K2Node_CustomEvent_Value_1;
	Parms.K2Node_CustomEvent_Size = K2Node_CustomEvent_Size;
	Parms.K2Node_CustomEvent_InColor = K2Node_CustomEvent_InColor;
	Parms.K2Node_CustomEvent_GradientPower = K2Node_CustomEvent_GradientPower;
	Parms.K2Node_CustomEvent_Tiling = K2Node_CustomEvent_Tiling;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.K2Node_CustomEvent_InPercent = K2Node_CustomEvent_InPercent;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_CustomEvent_GradientTexture = K2Node_CustomEvent_GradientTexture;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.K2Node_CustomEvent_NewColor = K2Node_CustomEvent_NewColor;
	Parms.K2Node_CustomEvent_InterpSpeed = K2Node_CustomEvent_InterpSpeed;
	Parms.K2Node_CustomEvent_IsChanging = K2Node_CustomEvent_IsChanging;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_CInterpTo_ReturnValue = CallFunc_CInterpTo_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.K2Node_CustomEvent_FillType = K2Node_CustomEvent_FillType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_SubtractBrightnessValue_ReturnValue = CallFunc_SubtractBrightnessValue_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.CallFunc_GetEffectMaterial_ReturnValue_1 = CallFunc_GetEffectMaterial_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_GetRenderOpacity_ReturnValue = CallFunc_GetRenderOpacity_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


