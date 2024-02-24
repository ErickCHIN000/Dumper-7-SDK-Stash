#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_WidgetCurveAnimation_Parent.ba_WidgetCurveAnimation_Parent_C
// (Actor)

class UClass* Aba_WidgetCurveAnimation_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_WidgetCurveAnimation_Parent_C");

	return Clss;
}


// ba_WidgetCurveAnimation_Parent_C ba_WidgetCurveAnimation_Parent.Default__ba_WidgetCurveAnimation_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_WidgetCurveAnimation_Parent_C* Aba_WidgetCurveAnimation_Parent_C::GetDefaultObj()
{
	static class Aba_WidgetCurveAnimation_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_WidgetCurveAnimation_Parent_C*>(Aba_WidgetCurveAnimation_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_WidgetCurveAnimation_Parent.ba_WidgetCurveAnimation_Parent_C.GetTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Time                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_WidgetCurveAnimation_Parent_C::GetTime(float* Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_WidgetCurveAnimation_Parent_C", "GetTime");

	Params::Aba_WidgetCurveAnimation_Parent_C_GetTime_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;

}


// Function ba_WidgetCurveAnimation_Parent.ba_WidgetCurveAnimation_Parent_C.Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void Aba_WidgetCurveAnimation_Parent_C::Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_WidgetCurveAnimation_Parent_C", "Timeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_WidgetCurveAnimation_Parent.ba_WidgetCurveAnimation_Parent_C.Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void Aba_WidgetCurveAnimation_Parent_C::Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_WidgetCurveAnimation_Parent_C", "Timeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_WidgetCurveAnimation_Parent.ba_WidgetCurveAnimation_Parent_C.Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    TargetMaterial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MaterialParameter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaterialParemeterFloor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaterialParameterCeiling                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_WidgetCurveAnimation_Parent_C::Start(class UWidget* Widget, class UMaterialInstanceDynamic* TargetMaterial, class FName MaterialParameter, float MaterialParemeterFloor, float MaterialParameterCeiling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_WidgetCurveAnimation_Parent_C", "Start");

	Params::Aba_WidgetCurveAnimation_Parent_C_Start_Params Parms{};

	Parms.Widget = Widget;
	Parms.TargetMaterial = TargetMaterial;
	Parms.MaterialParameter = MaterialParameter;
	Parms.MaterialParemeterFloor = MaterialParemeterFloor;
	Parms.MaterialParameterCeiling = MaterialParameterCeiling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_WidgetCurveAnimation_Parent.ba_WidgetCurveAnimation_Parent_C.Stop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_WidgetCurveAnimation_Parent_C::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_WidgetCurveAnimation_Parent_C", "Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_WidgetCurveAnimation_Parent.ba_WidgetCurveAnimation_Parent_C.ExecuteUbergraph_ba_WidgetCurveAnimation_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomGameInstance*         CallFunc_GetCGGameInstanceParent_AsCustom_Game_Instance          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_CustomEvent_TargetMaterial                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_MaterialParameter                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_MaterialParemeterFloor                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_MaterialParameterCeiling                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRenderOpacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_OutY                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_OutY_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_OutY_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_OutY_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_OutY_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   CallFunc_GetCachedGeometry_ReturnValue                           (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetLocalSize_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomGameInstance*         CallFunc_GetCGGameInstanceParent_AsCustom_Game_Instance_1        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_WidgetCurveAnimation_Parent_C::ExecuteUbergraph_ba_WidgetCurveAnimation_Parent(int32 EntryPoint, class UCustomGameInstance* CallFunc_GetCGGameInstanceParent_AsCustom_Game_Instance, bool Temp_bool_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, class UWidget* K2Node_CustomEvent_Widget, class UMaterialInstanceDynamic* K2Node_CustomEvent_TargetMaterial, class FName K2Node_CustomEvent_MaterialParameter, float K2Node_CustomEvent_MaterialParemeterFloor, float K2Node_CustomEvent_MaterialParameterCeiling, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_GetCurveValue_OutY, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetCurveValue_OutY_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetCurveValue_OutY_2, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_GetCurveValue_OutY_3, bool CallFunc_IsValid_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_GetCurveValue_OutY_4, float CallFunc_MapRangeClamped_ReturnValue, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, bool Temp_bool_IsClosed_Variable_2, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Lerp_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_5, class UCustomGameInstance* CallFunc_GetCGGameInstanceParent_AsCustom_Game_Instance_1, float K2Node_Select_Default, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_WidgetCurveAnimation_Parent_C", "ExecuteUbergraph_ba_WidgetCurveAnimation_Parent");

	Params::Aba_WidgetCurveAnimation_Parent_C_ExecuteUbergraph_ba_WidgetCurveAnimation_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCGGameInstanceParent_AsCustom_Game_Instance = CallFunc_GetCGGameInstanceParent_AsCustom_Game_Instance;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.K2Node_CustomEvent_TargetMaterial = K2Node_CustomEvent_TargetMaterial;
	Parms.K2Node_CustomEvent_MaterialParameter = K2Node_CustomEvent_MaterialParameter;
	Parms.K2Node_CustomEvent_MaterialParemeterFloor = K2Node_CustomEvent_MaterialParemeterFloor;
	Parms.K2Node_CustomEvent_MaterialParameterCeiling = K2Node_CustomEvent_MaterialParameterCeiling;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetRenderOpacity_ReturnValue = CallFunc_GetRenderOpacity_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_GetCurveValue_OutY = CallFunc_GetCurveValue_OutY;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCurveValue_OutY_1 = CallFunc_GetCurveValue_OutY_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCurveValue_OutY_2 = CallFunc_GetCurveValue_OutY_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_GetCurveValue_OutY_3 = CallFunc_GetCurveValue_OutY_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_4 = CallFunc_Add_FloatFloat_ReturnValue_4;
	Parms.CallFunc_GetCurveValue_OutY_4 = CallFunc_GetCurveValue_OutY_4;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.CallFunc_GetCachedGeometry_ReturnValue = CallFunc_GetCachedGeometry_ReturnValue;
	Parms.CallFunc_GetLocalSize_ReturnValue = CallFunc_GetLocalSize_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_5 = CallFunc_Add_FloatFloat_ReturnValue_5;
	Parms.CallFunc_GetCGGameInstanceParent_AsCustom_Game_Instance_1 = CallFunc_GetCGGameInstanceParent_AsCustom_Game_Instance_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


