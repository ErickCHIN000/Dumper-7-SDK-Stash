#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bc_TutorialSystem.bc_TutorialSystem_C
// (None)

class UClass* Ubc_TutorialSystem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bc_TutorialSystem_C");

	return Clss;
}


// bc_TutorialSystem_C bc_TutorialSystem.Default__bc_TutorialSystem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubc_TutorialSystem_C* Ubc_TutorialSystem_C::GetDefaultObj()
{
	static class Ubc_TutorialSystem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubc_TutorialSystem_C*>(Ubc_TutorialSystem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bc_TutorialSystem.bc_TutorialSystem_C.Clear
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_TutorialSystem_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_TutorialSystem_C", "Clear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_TutorialSystem.bc_TutorialSystem_C.Draw
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Min                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubc_TutorialSystem_C::Draw(const struct FVector2D& Min, const struct FVector2D& Max)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_TutorialSystem_C", "Draw");

	Params::Ubc_TutorialSystem_C_Draw_Params Parms{};

	Parms.Min = Min;
	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bc_TutorialSystem.bc_TutorialSystem_C.Begin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URetainerBox*                RB                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubc_TutorialSystem_C::Begin(class URetainerBox* RB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_TutorialSystem_C", "Begin");

	Params::Ubc_TutorialSystem_C_Begin_Params Parms{};

	Parms.RB = RB;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bc_TutorialSystem.bc_TutorialSystem_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void Ubc_TutorialSystem_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_TutorialSystem_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_TutorialSystem.bc_TutorialSystem_C.End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URetainerBox*                RB                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubc_TutorialSystem_C::End(class URetainerBox* RB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_TutorialSystem_C", "End");

	Params::Ubc_TutorialSystem_C_End_Params Parms{};

	Parms.RB = RB;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bc_TutorialSystem.bc_TutorialSystem_C.DrawWidget
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             Widget                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void Ubc_TutorialSystem_C::DrawWidget(TArray<class UWidget*>& Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_TutorialSystem_C", "DrawWidget");

	Params::Ubc_TutorialSystem_C_DrawWidget_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bc_TutorialSystem.bc_TutorialSystem_C.ExecuteUbergraph_bc_TutorialSystem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_CustomEvent_Min                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_CustomEvent_Max                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvas*                     CallFunc_BeginDrawCanvasToRenderTarget_Canvas                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_BeginDrawCanvasToRenderTarget_Size                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDrawToRenderTargetContext  CallFunc_BeginDrawCanvasToRenderTarget_Context                   (NoDestructor)
// struct FVector2D                   CallFunc_Divide_Vector2DVector2D_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSize_Width                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSize_Height                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DVector2D_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URetainerBox*                K2Node_CustomEvent_RB_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_Multiply_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DVector2D_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetEffectMaterial_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBlendableInterface>CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// class URetainerBox*                K2Node_CustomEvent_RB                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetEffectMaterial_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBlendableInterface>CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1      (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// TArray<class UWidget*>             K2Node_CustomEvent_Widget                                        (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   CallFunc_GetCachedGeometry_ReturnValue                           (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetAbsoluteSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_LocalToViewport_PixelPosition                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_LocalToViewport_ViewportPosition                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubc_TutorialSystem_C::ExecuteUbergraph_bc_TutorialSystem(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector2D& K2Node_CustomEvent_Min, const struct FVector2D& K2Node_CustomEvent_Max, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_1, int32 CallFunc_GetSize_Width, int32 CallFunc_GetSize_Height, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, class URetainerBox* K2Node_CustomEvent_RB_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, class URetainerBox* K2Node_CustomEvent_RB, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue_1, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1, TArray<class UWidget*>& K2Node_CustomEvent_Widget, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_GetAbsoluteSize_ReturnValue, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_TutorialSystem_C", "ExecuteUbergraph_bc_TutorialSystem");

	Params::Ubc_TutorialSystem_C_ExecuteUbergraph_bc_TutorialSystem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_Min = K2Node_CustomEvent_Min;
	Parms.K2Node_CustomEvent_Max = K2Node_CustomEvent_Max;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Canvas = CallFunc_BeginDrawCanvasToRenderTarget_Canvas;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Size = CallFunc_BeginDrawCanvasToRenderTarget_Size;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Context = CallFunc_BeginDrawCanvasToRenderTarget_Context;
	Parms.CallFunc_Divide_Vector2DVector2D_ReturnValue = CallFunc_Divide_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_GetViewportSize_ReturnValue_1 = CallFunc_GetViewportSize_ReturnValue_1;
	Parms.CallFunc_GetSize_Width = CallFunc_GetSize_Width;
	Parms.CallFunc_GetSize_Height = CallFunc_GetSize_Height;
	Parms.CallFunc_Divide_Vector2DVector2D_ReturnValue_1 = CallFunc_Divide_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.K2Node_CustomEvent_RB_1 = K2Node_CustomEvent_RB_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DVector2D_ReturnValue = CallFunc_Multiply_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DVector2D_ReturnValue_1 = CallFunc_Multiply_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_GetEffectMaterial_ReturnValue = CallFunc_GetEffectMaterial_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput = CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput;
	Parms.K2Node_CustomEvent_RB = K2Node_CustomEvent_RB;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetEffectMaterial_ReturnValue_1 = CallFunc_GetEffectMaterial_ReturnValue_1;
	Parms.CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1 = CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCachedGeometry_ReturnValue = CallFunc_GetCachedGeometry_ReturnValue;
	Parms.CallFunc_GetAbsoluteSize_ReturnValue = CallFunc_GetAbsoluteSize_ReturnValue;
	Parms.CallFunc_LocalToViewport_PixelPosition = CallFunc_LocalToViewport_PixelPosition;
	Parms.CallFunc_LocalToViewport_ViewportPosition = CallFunc_LocalToViewport_ViewportPosition;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


