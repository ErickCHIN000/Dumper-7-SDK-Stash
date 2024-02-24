#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Container_Linear.WB_Container_Linear_C
// (None)

class UClass* UWB_Container_Linear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Container_Linear_C");

	return Clss;
}


// WB_Container_Linear_C WB_Container_Linear.Default__WB_Container_Linear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Container_Linear_C* UWB_Container_Linear_C::GetDefaultObj()
{
	static class UWB_Container_Linear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Container_Linear_C*>(UWB_Container_Linear_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Container_Linear.WB_Container_Linear_C.Set_Mirror_OV_OnTopMarquee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Mirror                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::Set_Mirror_OV_OnTopMarquee(bool Mirror, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable, double K2Node_Select_Default, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "Set_Mirror_OV_OnTopMarquee");

	Params::UWB_Container_Linear_C_Set_Mirror_OV_OnTopMarquee_Params Parms{};

	Parms.Mirror = Mirror;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.Set_Mirror_OV_TargetPB_Marquee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Mirror                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::Set_Mirror_OV_TargetPB_Marquee(bool Mirror, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable, double K2Node_Select_Default, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "Set_Mirror_OV_TargetPB_Marquee");

	Params::UWB_Container_Linear_C_Set_Mirror_OV_TargetPB_Marquee_Params Parms{};

	Parms.Mirror = Mirror;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.Set_Mirror_OV_BasePB_Marquee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Mirror                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::Set_Mirror_OV_BasePB_Marquee(bool Mirror, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable, double K2Node_Select_Default, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "Set_Mirror_OV_BasePB_Marquee");

	Params::UWB_Container_Linear_C_Set_Mirror_OV_BasePB_Marquee_Params Parms{};

	Parms.Mirror = Mirror;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.Handle_SetUseSeparation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUseSeparation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::Handle_SetUseSeparation(bool bUseSeparation, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "Handle_SetUseSeparation");

	Params::UWB_Container_Linear_C_Handle_SetUseSeparation_Params Parms{};

	Parms.bUseSeparation = bUseSeparation;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.Set_DefaultMarquee_Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::Set_DefaultMarquee_Visibility(bool bVisible, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "Set_DefaultMarquee_Visibility");

	Params::UWB_Container_Linear_C_Set_DefaultMarquee_Visibility_Params Parms{};

	Parms.bVisible = bVisible;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.Set_MarqueeMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMarqueeMask            MaskType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CustomMask                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMarqueeMask            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_4                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWB_Marquee_Linear_C*        CallFunc_FindMarquee_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::Set_MarqueeMask(enum class EMarqueeMask MaskType, class UTexture2D* CustomMask, enum class EMarqueeMask Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UTexture2D* K2Node_Select_Default, class UWB_Marquee_Linear_C* CallFunc_FindMarquee_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "Set_MarqueeMask");

	Params::UWB_Container_Linear_C_Set_MarqueeMask_Params Parms{};

	Parms.MaskType = MaskType;
	Parms.CustomMask = CustomMask;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FindMarquee_ReturnValue = CallFunc_FindMarquee_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.Hide_AllMarquees
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Container_Linear_C::Hide_AllMarquees()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "Hide_AllMarquees");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Container_Linear.WB_Container_Linear_C.Interp_BasePB_Color
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InterpSpeed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsChanging                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::Interp_BasePB_Color(const struct FLinearColor& Target, double InterpSpeed, bool bIsChanging)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "Interp_BasePB_Color");

	Params::UWB_Container_Linear_C_Interp_BasePB_Color_Params Parms{};

	Parms.Target = Target;
	Parms.InterpSpeed = InterpSpeed;
	Parms.bIsChanging = bIsChanging;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetMirrorY_OV_Target
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MirrorY                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetMirrorY_OV_Target(bool MirrorY, bool Temp_bool_Variable, double Temp_real_Variable, double Temp_real_Variable_1, double K2Node_Select_Default, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetMirrorY_OV_Target");

	Params::UWB_Container_Linear_C_SetMirrorY_OV_Target_Params Parms{};

	Parms.MirrorY = MirrorY;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetMirrorX_OV_Target
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MirrorX                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetMirrorX_OV_Target(bool MirrorX, bool Temp_bool_Variable, double Temp_real_Variable, double Temp_real_Variable_1, double K2Node_Select_Default, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetMirrorX_OV_Target");

	Params::UWB_Container_Linear_C_SetMirrorX_OV_Target_Params Parms{};

	Parms.MirrorX = MirrorX;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.GetSizeY
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Current_Size_Y                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::GetSizeY(double* Current_Size_Y, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "GetSizeY");

	Params::UWB_Container_Linear_C_GetSizeY_Params Parms{};

	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;

	UObject::ProcessEvent(Func, &Parms);

	if (Current_Size_Y != nullptr)
		*Current_Size_Y = Parms.Current_Size_Y;

}


// Function WB_Container_Linear.WB_Container_Linear_C.GetPercent_Separated
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Percent                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::GetPercent_Separated(double* Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "GetPercent_Separated");

	Params::UWB_Container_Linear_C_GetPercent_Separated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Percent != nullptr)
		*Percent = Parms.Percent;

}


// Function WB_Container_Linear.WB_Container_Linear_C.GetAbsoluteTargetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UWB_Container_Linear_C::GetAbsoluteTargetPercent(double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "GetAbsoluteTargetPercent");

	Params::UWB_Container_Linear_C_GetAbsoluteTargetPercent_Params Parms{};

	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Container_Linear.WB_Container_Linear_C.FindHighestPercentValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UWB_Container_Linear_C::FindHighestPercentValue(bool Temp_bool_Variable, bool CallFunc_Greater_DoubleDouble_ReturnValue, double K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "FindHighestPercentValue");

	Params::UWB_Container_Linear_C_FindHighestPercentValue_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Container_Linear.WB_Container_Linear_C.IsMarqueeMethod
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EMarqueeMethod          Method                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_Container_Linear_C::IsMarqueeMethod(enum class EMarqueeMethod Method, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "IsMarqueeMethod");

	Params::UWB_Container_Linear_C_IsMarqueeMethod_Params Parms{};

	Parms.Method = Method;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Container_Linear.WB_Container_Linear_C.FindMarquee
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWB_Marquee_Linear_C*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EMarqueeMethod          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Marquee_Linear_C*        K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWB_Marquee_Linear_C* UWB_Container_Linear_C::FindMarquee(enum class EMarqueeMethod Temp_byte_Variable, class UWB_Marquee_Linear_C* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "FindMarquee");

	Params::UWB_Container_Linear_C_FindMarquee_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Container_Linear.WB_Container_Linear_C.UpdateStaticPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsProgressMethodStatic_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::UpdateStaticPercent(bool CallFunc_IsProgressMethodStatic_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "UpdateStaticPercent");

	Params::UWB_Container_Linear_C_UpdateStaticPercent_Params Parms{};

	Parms.CallFunc_IsProgressMethodStatic_ReturnValue = CallFunc_IsProgressMethodStatic_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.IsProgressMethodStatic
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_Container_Linear_C::IsProgressMethodStatic(bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "IsProgressMethodStatic");

	Params::UWB_Container_Linear_C_IsProgressMethodStatic_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Container_Linear.WB_Container_Linear_C.IsProgressMethodInterpolate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_Container_Linear_C::IsProgressMethodInterpolate(bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "IsProgressMethodInterpolate");

	Params::UWB_Container_Linear_C_IsProgressMethodInterpolate_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Container_Linear.WB_Container_Linear_C.GetTargetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Percent                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::GetTargetPercent(double* Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "GetTargetPercent");

	Params::UWB_Container_Linear_C_GetTargetPercent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Percent != nullptr)
		*Percent = Parms.Percent;

}


// Function WB_Container_Linear.WB_Container_Linear_C.FindTargetPercentValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetPercent_Percent                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UWB_Container_Linear_C::FindTargetPercentValue(double CallFunc_GetPercent_Percent, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "FindTargetPercentValue");

	Params::UWB_Container_Linear_C_FindTargetPercentValue_Params Parms{};

	Parms.CallFunc_GetPercent_Percent = CallFunc_GetPercent_Percent;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Container_Linear.WB_Container_Linear_C.FindTargetFillColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UWB_Container_Linear_C::FindTargetFillColor(bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "FindTargetFillColor");

	Params::UWB_Container_Linear_C_FindTargetFillColor_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Container_Linear.WB_Container_Linear_C.IsNegativeFillValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_Container_Linear_C::IsNegativeFillValue(double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "IsNegativeFillValue");

	Params::UWB_Container_Linear_C_IsNegativeFillValue_Params Parms{};

	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Container_Linear.WB_Container_Linear_C.GetSizeX
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Current_Size_X                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::GetSizeX(double* Current_Size_X, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "GetSizeX");

	Params::UWB_Container_Linear_C_GetSizeX_Params Parms{};

	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;

	UObject::ProcessEvent(Func, &Parms);

	if (Current_Size_X != nullptr)
		*Current_Size_X = Parms.Current_Size_X;

}


// Function WB_Container_Linear.WB_Container_Linear_C.FindTargetProgressBarPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LocalPercent                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetSizeY_Current_Size_Y                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetSizeX_Current_Size_X                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetSizeX_Current_Size_X_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::FindTargetProgressBarPosition(double Percent, double LocalPercent, bool Temp_bool_Variable, double Temp_real_Variable, bool Temp_bool_Variable_1, double Temp_real_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, double Temp_real_Variable_2, bool Temp_bool_Variable_4, double Temp_real_Variable_3, bool Temp_bool_Variable_5, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, bool Temp_bool_Variable_6, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_GetSizeY_Current_Size_Y, double K2Node_Select_Default, double K2Node_Select_Default_1, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double K2Node_Select_Default_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, double CallFunc_GetSizeX_Current_Size_X, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, double K2Node_Select_Default_3, double CallFunc_MapRangeClamped_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_4, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_5, double CallFunc_GetSizeX_Current_Size_X_1, double K2Node_Select_Default_4, double K2Node_Select_Default_5, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double K2Node_Select_Default_6, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "FindTargetProgressBarPosition");

	Params::UWB_Container_Linear_C_FindTargetProgressBarPosition_Params Parms{};

	Parms.Percent = Percent;
	Parms.LocalPercent = LocalPercent;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetSizeY_Current_Size_Y = CallFunc_GetSizeY_Current_Size_Y;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;
	Parms.CallFunc_GetSizeX_Current_Size_X = CallFunc_GetSizeX_Current_Size_X;
	Parms.CallFunc_MakeVector2D_ReturnValue_3 = CallFunc_MakeVector2D_ReturnValue_3;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_4 = CallFunc_MakeVector2D_ReturnValue_4;
	Parms.CallFunc_MakeVector2D_ReturnValue_5 = CallFunc_MakeVector2D_ReturnValue_5;
	Parms.CallFunc_GetSizeX_Current_Size_X_1 = CallFunc_GetSizeX_Current_Size_X_1;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.CallFunc_MakeVector2D_ReturnValue_6 = CallFunc_MakeVector2D_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.GetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Percent                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetPercent_Percent                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::GetPercent(double* Percent, double CallFunc_GetPercent_Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "GetPercent");

	Params::UWB_Container_Linear_C_GetPercent_Params Parms{};

	Parms.CallFunc_GetPercent_Percent = CallFunc_GetPercent_Percent;

	UObject::ProcessEvent(Func, &Parms);

	if (Percent != nullptr)
		*Percent = Parms.Percent;

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             InPercent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetPercent(double InPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetPercent");

	Params::UWB_Container_Linear_C_SetPercent_Params Parms{};

	Parms.InPercent = InPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetFillColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InColor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             GradientPower                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     Tiling                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetFillColor(const struct FLinearColor& InColor, double GradientPower, enum class ESlateBrushTileType Tiling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetFillColor");

	Params::UWB_Container_Linear_C_SetFillColor_Params Parms{};

	Parms.InColor = InColor;
	Parms.GradientPower = GradientPower;
	Parms.Tiling = Tiling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetSize(const struct FVector2D& Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetSize");

	Params::UWB_Container_Linear_C_SetSize_Params Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetUseGradient
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseGradient                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetUseGradient(bool UseGradient)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetUseGradient");

	Params::UWB_Container_Linear_C_SetUseGradient_Params Parms{};

	Parms.UseGradient = UseGradient;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetTargetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TargetPercent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetTargetPercent(double TargetPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetTargetPercent");

	Params::UWB_Container_Linear_C_SetTargetPercent_Params Parms{};

	Parms.TargetPercent = TargetPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetTargetFillColorPositive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetTargetFillColorPositive(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetTargetFillColorPositive");

	Params::UWB_Container_Linear_C_SetTargetFillColorPositive_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetTargetFillColorNegative
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetTargetFillColorNegative(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetTargetFillColorNegative");

	Params::UWB_Container_Linear_C_SetTargetFillColorNegative_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetUseTargetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseTargetPercent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetUseTargetPercent(bool UseTargetPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetUseTargetPercent");

	Params::UWB_Container_Linear_C_SetUseTargetPercent_Params Parms{};

	Parms.UseTargetPercent = UseTargetPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.UpdateTargetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Container_Linear_C::UpdateTargetPercent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "UpdateTargetPercent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Container_Linear.WB_Container_Linear_C.UpdatePercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Container_Linear_C::UpdatePercent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "UpdatePercent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetProgressMethod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProgressMethod         ProgressMethod                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetProgressMethod(enum class EProgressMethod ProgressMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetProgressMethod");

	Params::UWB_Container_Linear_C_SetProgressMethod_Params Parms{};

	Parms.ProgressMethod = ProgressMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetFillColorMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetFillColorMask(class UObject* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetFillColorMask");

	Params::UWB_Container_Linear_C_SetFillColorMask_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetGradientMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  GradientTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetGradientMask(class UTexture2D* GradientTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetGradientMask");

	Params::UWB_Container_Linear_C_SetGradientMask_Params Parms{};

	Parms.GradientTexture = GradientTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueeAppearance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsMarquee                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMarqueeMethod          MarqueeMethod                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetCustomMarqueeAppearance(bool bIsMarquee, enum class EMarqueeMethod MarqueeMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetCustomMarqueeAppearance");

	Params::UWB_Container_Linear_C_SetCustomMarqueeAppearance_Params Parms{};

	Parms.bIsMarquee = bIsMarquee;
	Parms.MarqueeMethod = MarqueeMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueeSpeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Speed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetCustomMarqueeSpeed(double Speed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetCustomMarqueeSpeed");

	Params::UWB_Container_Linear_C_SetCustomMarqueeSpeed_Params Parms{};

	Parms.Speed = Speed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueeMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMarqueeMask            MaskType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CustomMask                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     MaskTiling                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetCustomMarqueeMask(enum class EMarqueeMask MaskType, class UTexture2D* CustomMask, enum class ESlateBrushTileType MaskTiling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetCustomMarqueeMask");

	Params::UWB_Container_Linear_C_SetCustomMarqueeMask_Params Parms{};

	Parms.MaskType = MaskType;
	Parms.CustomMask = CustomMask;
	Parms.MaskTiling = MaskTiling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueePercent_Current
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Container_Linear_C::SetCustomMarqueePercent_Current()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetCustomMarqueePercent_Current");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueePercent_Target
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetCustomMarqueePercent_Target(double Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetCustomMarqueePercent_Target");

	Params::UWB_Container_Linear_C_SetCustomMarqueePercent_Target_Params Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueePercent_CurrentAndTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Container_Linear_C::SetCustomMarqueePercent_CurrentAndTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetCustomMarqueePercent_CurrentAndTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetDefaultMarquee_IsMarquee
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMarquee                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetDefaultMarquee_IsMarquee(bool IsMarquee)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetDefaultMarquee_IsMarquee");

	Params::UWB_Container_Linear_C_SetDefaultMarquee_IsMarquee_Params Parms{};

	Parms.IsMarquee = IsMarquee;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetDefaultMarquee_Image
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetDefaultMarquee_Image(class UTexture2D* Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetDefaultMarquee_Image");

	Params::UWB_Container_Linear_C_SetDefaultMarquee_Image_Params Parms{};

	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetDefaultMarquee_ImageSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Image_Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetDefaultMarquee_ImageSize(const struct FVector2D& Image_Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetDefaultMarquee_ImageSize");

	Params::UWB_Container_Linear_C_SetDefaultMarquee_ImageSize_Params Parms{};

	Parms.Image_Size = Image_Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetDefaultMarquee_Tint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetDefaultMarquee_Tint(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetDefaultMarquee_Tint");

	Params::UWB_Container_Linear_C_SetDefaultMarquee_Tint_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetDefaultMarquee_DrawAs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateBrushDrawType     Draw_As                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetDefaultMarquee_DrawAs(enum class ESlateBrushDrawType Draw_As)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetDefaultMarquee_DrawAs");

	Params::UWB_Container_Linear_C_SetDefaultMarquee_DrawAs_Params Parms{};

	Parms.Draw_As = Draw_As;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetDefaultMarquee_Tiling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateBrushTileType     Tiling                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetDefaultMarquee_Tiling(enum class ESlateBrushTileType Tiling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetDefaultMarquee_Tiling");

	Params::UWB_Container_Linear_C_SetDefaultMarquee_Tiling_Params Parms{};

	Parms.Tiling = Tiling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueeColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InColorAndOpacity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetCustomMarqueeColor(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetCustomMarqueeColor");

	Params::UWB_Container_Linear_C_SetCustomMarqueeColor_Params Parms{};

	Parms.InColorAndOpacity = InColorAndOpacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetUseSeparation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUseSeparation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetUseSeparation(bool bUseSeparation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetUseSeparation");

	Params::UWB_Container_Linear_C_SetUseSeparation_Params Parms{};

	Parms.bUseSeparation = bUseSeparation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.AddSegments
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumSegments                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Spacing                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FillColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarFillType    FillType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsFillFromCenter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseShader                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::AddSegments(int32 NumSegments, double Spacing, const struct FVector2D& Size, const struct FLinearColor& FillColor, enum class EProgressBarFillType FillType, bool bIsFillFromCenter, bool bUseShader)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "AddSegments");

	Params::UWB_Container_Linear_C_AddSegments_Params Parms{};

	Parms.NumSegments = NumSegments;
	Parms.Spacing = Spacing;
	Parms.Size = Size;
	Parms.FillColor = FillColor;
	Parms.FillType = FillType;
	Parms.bIsFillFromCenter = bIsFillFromCenter;
	Parms.bUseShader = bUseShader;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.AddBackground
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseBackgroundBlur                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             BlurStrength                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::AddBackground(const struct FLinearColor& Color, bool bUseBackgroundBlur, double BlurStrength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "AddBackground");

	Params::UWB_Container_Linear_C_AddBackground_Params Parms{};

	Parms.Color = Color;
	Parms.bUseBackgroundBlur = bUseBackgroundBlur;
	Parms.BlurStrength = BlurStrength;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.UpdateSeparationPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::UpdateSeparationPercent(double Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "UpdateSeparationPercent");

	Params::UWB_Container_Linear_C_UpdateSeparationPercent_Params Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetUseAbsoluteFillMethod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAbsoluteFill                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetUseAbsoluteFillMethod(bool bAbsoluteFill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetUseAbsoluteFillMethod");

	Params::UWB_Container_Linear_C_SetUseAbsoluteFillMethod_Params Parms{};

	Parms.bAbsoluteFill = bAbsoluteFill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.SetBarFillType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProgressBarFillType    FillType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseShader                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::SetBarFillType(enum class EProgressBarFillType FillType, bool bUseShader)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "SetBarFillType");

	Params::UWB_Container_Linear_C_SetBarFillType_Params Parms{};

	Parms.FillType = FillType;
	Parms.bUseShader = bUseShader;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.UpdateMarqueeFillType
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Container_Linear_C::UpdateMarqueeFillType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "UpdateMarqueeFillType");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Container_Linear.WB_Container_Linear_C.StartTriggerProgressChangeColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ProgressChangeColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::StartTriggerProgressChangeColor(const struct FLinearColor& ProgressChangeColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "StartTriggerProgressChangeColor");

	Params::UWB_Container_Linear_C_StartTriggerProgressChangeColor_Params Parms{};

	Parms.ProgressChangeColor = ProgressChangeColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.StopTriggerProgressChangeColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Container_Linear_C::StopTriggerProgressChangeColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "StopTriggerProgressChangeColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Container_Linear.WB_Container_Linear_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "Tick");

	Params::UWB_Container_Linear_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "PreConstruct");

	Params::UWB_Container_Linear_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Linear.WB_Container_Linear_C.ExecuteUbergraph_WB_Container_Linear
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsMarquee                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_Image                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_CustomEvent_Image_Size                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Color_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushDrawType     K2Node_CustomEvent_Draw_As                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// enum class ESlateBrushTileType     K2Node_CustomEvent_Tiling                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_InColorAndOpacity                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUseSeparation                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NumSegments                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Spacing                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_CustomEvent_Size                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_FillColor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarFillType    K2Node_CustomEvent_FillType_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsFillFromCenter                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUseShader_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FindHighestPercentValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMarqueeMethod_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Color                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUseBackgroundBlur                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_BlurStrength                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMarqueeMethod_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Percent                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMarqueeMethod_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Marquee_Linear_C*        CallFunc_FindMarquee_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Percent_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bAbsoluteFill                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarFillType    K2Node_CustomEvent_FillType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUseShader                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Marquee_Linear_C*        CallFunc_FindMarquee_ReturnValue_1                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Marquee_Linear_C*        CallFunc_FindMarquee_ReturnValue_2                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_ProgressChangeColor                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMarqueeMask            K2Node_CustomEvent_MaskType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_CustomMask                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     K2Node_CustomEvent_MaskTiling                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Speed                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsMarquee                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMarqueeMethod          K2Node_CustomEvent_MarqueeMethod                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_GradientTexture                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Value                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressMethod         K2Node_CustomEvent_ProgressMethod                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetAbsoluteTargetPercent_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNegativeFillValue_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_FindTargetFillColor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetAbsoluteTargetPercent_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_UseTargetPercent                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProgressBarStyle           K2Node_MakeStruct_ProgressBarStyle                               (None)
// struct FLinearColor                K2Node_CustomEvent_Color_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Color_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_TargetPercent                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProgressBarStyle           K2Node_MakeStruct_ProgressBarStyle_1                             (None)
// bool                               K2Node_CustomEvent_UseGradient                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_CustomEvent_Size_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProgressBarStyle           K2Node_MakeStruct_ProgressBarStyle_2                             (None)
// struct FLinearColor                K2Node_CustomEvent_InColor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_GradientPower                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     K2Node_CustomEvent_Tiling_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_InPercent                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProgressBarStyle           K2Node_MakeStruct_ProgressBarStyle_3                             (None)
// bool                               CallFunc_IsProgressMethodInterpolate_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Linear_C::ExecuteUbergraph_WB_Container_Linear(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool K2Node_CustomEvent_IsMarquee, class UTexture2D* K2Node_CustomEvent_Image, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& K2Node_CustomEvent_Image_Size, const struct FLinearColor& K2Node_CustomEvent_Color_1, enum class ESlateBrushDrawType K2Node_CustomEvent_Draw_As, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateBrushTileType K2Node_CustomEvent_Tiling, bool Temp_bool_IsClosed_Variable_1, const struct FLinearColor& K2Node_CustomEvent_InColorAndOpacity, bool K2Node_CustomEvent_bUseSeparation, int32 K2Node_CustomEvent_NumSegments, double K2Node_CustomEvent_Spacing, const struct FVector2D& K2Node_CustomEvent_Size, const struct FLinearColor& K2Node_CustomEvent_FillColor, enum class EProgressBarFillType K2Node_CustomEvent_FillType_1, bool K2Node_CustomEvent_bIsFillFromCenter, bool K2Node_CustomEvent_bUseShader_1, double CallFunc_FindHighestPercentValue_ReturnValue, bool CallFunc_IsMarqueeMethod_ReturnValue, const struct FLinearColor& K2Node_CustomEvent_Color, bool K2Node_CustomEvent_bUseBackgroundBlur, double K2Node_CustomEvent_BlurStrength, bool CallFunc_IsMarqueeMethod_ReturnValue_1, double K2Node_CustomEvent_Percent, bool CallFunc_IsMarqueeMethod_ReturnValue_2, class UWB_Marquee_Linear_C* CallFunc_FindMarquee_ReturnValue, double K2Node_CustomEvent_Percent_1, bool K2Node_CustomEvent_bAbsoluteFill, bool K2Node_SwitchEnum_CmpSuccess_1, bool Temp_bool_Has_Been_Initd_Variable, enum class EProgressBarFillType K2Node_CustomEvent_FillType, bool K2Node_CustomEvent_bUseShader, class UWB_Marquee_Linear_C* CallFunc_FindMarquee_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_1, class UWB_Marquee_Linear_C* CallFunc_FindMarquee_ReturnValue_2, const struct FLinearColor& K2Node_CustomEvent_ProgressChangeColor, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, enum class EMarqueeMask K2Node_CustomEvent_MaskType, class UTexture2D* K2Node_CustomEvent_CustomMask, enum class ESlateBrushTileType K2Node_CustomEvent_MaskTiling, double K2Node_CustomEvent_Speed, bool K2Node_CustomEvent_bIsMarquee, enum class EMarqueeMethod K2Node_CustomEvent_MarqueeMethod, class UTexture2D* K2Node_CustomEvent_GradientTexture, class UObject* K2Node_CustomEvent_Value, bool K2Node_SwitchEnum_CmpSuccess_2, bool Temp_bool_IsClosed_Variable_2, enum class EProgressMethod K2Node_CustomEvent_ProgressMethod, double CallFunc_GetAbsoluteTargetPercent_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_2, bool CallFunc_IsNegativeFillValue_ReturnValue, const struct FLinearColor& CallFunc_FindTargetFillColor_ReturnValue, double CallFunc_GetAbsoluteTargetPercent_ReturnValue_1, bool Temp_bool_IsClosed_Variable_3, bool K2Node_CustomEvent_UseTargetPercent, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle, const struct FLinearColor& K2Node_CustomEvent_Color_2, const struct FLinearColor& K2Node_CustomEvent_Color_3, double K2Node_CustomEvent_TargetPercent, bool Temp_bool_Has_Been_Initd_Variable_3, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle_1, bool K2Node_CustomEvent_UseGradient, const struct FVector2D& K2Node_CustomEvent_Size_1, bool Temp_bool_IsClosed_Variable_4, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle_2, const struct FLinearColor& K2Node_CustomEvent_InColor, double K2Node_CustomEvent_GradientPower, enum class ESlateBrushTileType K2Node_CustomEvent_Tiling_1, double K2Node_CustomEvent_InPercent, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle_3, bool CallFunc_IsProgressMethodInterpolate_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_4, bool K2Node_SwitchEnum_CmpSuccess_5, bool K2Node_SwitchEnum_CmpSuccess_6, bool K2Node_SwitchEnum_CmpSuccess_7, bool Temp_bool_Has_Been_Initd_Variable_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Linear_C", "ExecuteUbergraph_WB_Container_Linear");

	Params::UWB_Container_Linear_C_ExecuteUbergraph_WB_Container_Linear_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CustomEvent_IsMarquee = K2Node_CustomEvent_IsMarquee;
	Parms.K2Node_CustomEvent_Image = K2Node_CustomEvent_Image;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Image_Size = K2Node_CustomEvent_Image_Size;
	Parms.K2Node_CustomEvent_Color_1 = K2Node_CustomEvent_Color_1;
	Parms.K2Node_CustomEvent_Draw_As = K2Node_CustomEvent_Draw_As;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_CustomEvent_Tiling = K2Node_CustomEvent_Tiling;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.K2Node_CustomEvent_InColorAndOpacity = K2Node_CustomEvent_InColorAndOpacity;
	Parms.K2Node_CustomEvent_bUseSeparation = K2Node_CustomEvent_bUseSeparation;
	Parms.K2Node_CustomEvent_NumSegments = K2Node_CustomEvent_NumSegments;
	Parms.K2Node_CustomEvent_Spacing = K2Node_CustomEvent_Spacing;
	Parms.K2Node_CustomEvent_Size = K2Node_CustomEvent_Size;
	Parms.K2Node_CustomEvent_FillColor = K2Node_CustomEvent_FillColor;
	Parms.K2Node_CustomEvent_FillType_1 = K2Node_CustomEvent_FillType_1;
	Parms.K2Node_CustomEvent_bIsFillFromCenter = K2Node_CustomEvent_bIsFillFromCenter;
	Parms.K2Node_CustomEvent_bUseShader_1 = K2Node_CustomEvent_bUseShader_1;
	Parms.CallFunc_FindHighestPercentValue_ReturnValue = CallFunc_FindHighestPercentValue_ReturnValue;
	Parms.CallFunc_IsMarqueeMethod_ReturnValue = CallFunc_IsMarqueeMethod_ReturnValue;
	Parms.K2Node_CustomEvent_Color = K2Node_CustomEvent_Color;
	Parms.K2Node_CustomEvent_bUseBackgroundBlur = K2Node_CustomEvent_bUseBackgroundBlur;
	Parms.K2Node_CustomEvent_BlurStrength = K2Node_CustomEvent_BlurStrength;
	Parms.CallFunc_IsMarqueeMethod_ReturnValue_1 = CallFunc_IsMarqueeMethod_ReturnValue_1;
	Parms.K2Node_CustomEvent_Percent = K2Node_CustomEvent_Percent;
	Parms.CallFunc_IsMarqueeMethod_ReturnValue_2 = CallFunc_IsMarqueeMethod_ReturnValue_2;
	Parms.CallFunc_FindMarquee_ReturnValue = CallFunc_FindMarquee_ReturnValue;
	Parms.K2Node_CustomEvent_Percent_1 = K2Node_CustomEvent_Percent_1;
	Parms.K2Node_CustomEvent_bAbsoluteFill = K2Node_CustomEvent_bAbsoluteFill;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CustomEvent_FillType = K2Node_CustomEvent_FillType;
	Parms.K2Node_CustomEvent_bUseShader = K2Node_CustomEvent_bUseShader;
	Parms.CallFunc_FindMarquee_ReturnValue_1 = CallFunc_FindMarquee_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_FindMarquee_ReturnValue_2 = CallFunc_FindMarquee_ReturnValue_2;
	Parms.K2Node_CustomEvent_ProgressChangeColor = K2Node_CustomEvent_ProgressChangeColor;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_MaskType = K2Node_CustomEvent_MaskType;
	Parms.K2Node_CustomEvent_CustomMask = K2Node_CustomEvent_CustomMask;
	Parms.K2Node_CustomEvent_MaskTiling = K2Node_CustomEvent_MaskTiling;
	Parms.K2Node_CustomEvent_Speed = K2Node_CustomEvent_Speed;
	Parms.K2Node_CustomEvent_bIsMarquee = K2Node_CustomEvent_bIsMarquee;
	Parms.K2Node_CustomEvent_MarqueeMethod = K2Node_CustomEvent_MarqueeMethod;
	Parms.K2Node_CustomEvent_GradientTexture = K2Node_CustomEvent_GradientTexture;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.K2Node_CustomEvent_ProgressMethod = K2Node_CustomEvent_ProgressMethod;
	Parms.CallFunc_GetAbsoluteTargetPercent_ReturnValue = CallFunc_GetAbsoluteTargetPercent_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.CallFunc_IsNegativeFillValue_ReturnValue = CallFunc_IsNegativeFillValue_ReturnValue;
	Parms.CallFunc_FindTargetFillColor_ReturnValue = CallFunc_FindTargetFillColor_ReturnValue;
	Parms.CallFunc_GetAbsoluteTargetPercent_ReturnValue_1 = CallFunc_GetAbsoluteTargetPercent_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.K2Node_CustomEvent_UseTargetPercent = K2Node_CustomEvent_UseTargetPercent;
	Parms.K2Node_MakeStruct_ProgressBarStyle = K2Node_MakeStruct_ProgressBarStyle;
	Parms.K2Node_CustomEvent_Color_2 = K2Node_CustomEvent_Color_2;
	Parms.K2Node_CustomEvent_Color_3 = K2Node_CustomEvent_Color_3;
	Parms.K2Node_CustomEvent_TargetPercent = K2Node_CustomEvent_TargetPercent;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.K2Node_MakeStruct_ProgressBarStyle_1 = K2Node_MakeStruct_ProgressBarStyle_1;
	Parms.K2Node_CustomEvent_UseGradient = K2Node_CustomEvent_UseGradient;
	Parms.K2Node_CustomEvent_Size_1 = K2Node_CustomEvent_Size_1;
	Parms.Temp_bool_IsClosed_Variable_4 = Temp_bool_IsClosed_Variable_4;
	Parms.K2Node_MakeStruct_ProgressBarStyle_2 = K2Node_MakeStruct_ProgressBarStyle_2;
	Parms.K2Node_CustomEvent_InColor = K2Node_CustomEvent_InColor;
	Parms.K2Node_CustomEvent_GradientPower = K2Node_CustomEvent_GradientPower;
	Parms.K2Node_CustomEvent_Tiling_1 = K2Node_CustomEvent_Tiling_1;
	Parms.K2Node_CustomEvent_InPercent = K2Node_CustomEvent_InPercent;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_MakeStruct_ProgressBarStyle_3 = K2Node_MakeStruct_ProgressBarStyle_3;
	Parms.CallFunc_IsProgressMethodInterpolate_ReturnValue = CallFunc_IsProgressMethodInterpolate_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.K2Node_SwitchEnum_CmpSuccess_7 = K2Node_SwitchEnum_CmpSuccess_7;
	Parms.Temp_bool_Has_Been_Initd_Variable_4 = Temp_bool_Has_Been_Initd_Variable_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


