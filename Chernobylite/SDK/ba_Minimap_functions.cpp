#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_Minimap.ba_Minimap_C
// (Actor)

class UClass* Aba_Minimap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_Minimap_C");

	return Clss;
}


// ba_Minimap_C ba_Minimap.Default__ba_Minimap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_Minimap_C* Aba_Minimap_C::GetDefaultObj()
{
	static class Aba_Minimap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_Minimap_C*>(Aba_Minimap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_Minimap.ba_Minimap_C.WorldLocationToMinimap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  T                                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Min                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Pos                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_TransformLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DVector2D_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_Minimap_C::WorldLocationToMinimap(struct FTransform& T, const struct FVector& Location, const struct FVector2D& Min, const struct FVector2D& Max, struct FVector2D* Pos, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Minimap_C", "WorldLocationToMinimap");

	Params::Aba_Minimap_C_WorldLocationToMinimap_Params Parms{};

	Parms.T = T;
	Parms.Location = Location;
	Parms.Min = Min;
	Parms.Max = Max;
	Parms.CallFunc_TransformLocation_ReturnValue = CallFunc_TransformLocation_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue = CallFunc_Divide_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorFloat_ReturnValue = CallFunc_Add_VectorFloat_ReturnValue;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue_1 = CallFunc_Divide_VectorFloat_ReturnValue_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue_1 = CallFunc_Subtract_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_Divide_Vector2DVector2D_ReturnValue = CallFunc_Divide_Vector2DVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Pos != nullptr)
		*Pos = std::move(Parms.Pos);

}


// Function ba_Minimap.ba_Minimap_C.RemoveScaleFromCursor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   CursorNormalized                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Min                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_Minimap_C::RemoveScaleFromCursor(const struct FVector2D& CursorNormalized, const struct FVector2D& Min, const struct FVector2D& Max, struct FVector2D* Position, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Minimap_C", "RemoveScaleFromCursor");

	Params::Aba_Minimap_C_RemoveScaleFromCursor_Params Parms{};

	Parms.CursorNormalized = CursorNormalized;
	Parms.Min = Min;
	Parms.Max = Max;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DVector2D_ReturnValue = CallFunc_Multiply_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function ba_Minimap.ba_Minimap_C.MinimapPositionToWorld
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Position                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_Subtract_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_TransformLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector Aba_Minimap_C::MinimapPositionToWorld(const struct FVector2D& Position, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Minimap_C", "MinimapPositionToWorld");

	Params::Aba_Minimap_C_MinimapPositionToWorld_Params Parms{};

	Parms.Position = Position;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DFloat_ReturnValue = CallFunc_Subtract_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue_1 = CallFunc_Multiply_Vector2DFloat_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_TransformLocation_ReturnValue = CallFunc_TransformLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_Minimap.ba_Minimap_C.NormalizeLength
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Length                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NormalizedLength                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_Minimap_C::NormalizeLength(float Length, float* NormalizedLength, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Minimap_C", "NormalizeLength");

	Params::Aba_Minimap_C_NormalizeLength_Params Parms{};

	Parms.Length = Length;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (NormalizedLength != nullptr)
		*NormalizedLength = Parms.NormalizedLength;

}


// Function ba_Minimap.ba_Minimap_C.ActorToMap
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Min                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Pos                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Angle                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_InvertTransform_ReturnValue                             (IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MapPositionToMinimap_Pos                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapPositionToMinimap_Angle                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_Minimap_C::ActorToMap(class AActor* Actor, const struct FVector2D& Min, const struct FVector2D& Max, struct FVector2D* Pos, float* Angle, float CallFunc_MakeLiteralFloat_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FTransform& CallFunc_InvertTransform_ReturnValue, const struct FVector2D& CallFunc_MapPositionToMinimap_Pos, float CallFunc_MapPositionToMinimap_Angle, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Minimap_C", "ActorToMap");

	Params::Aba_Minimap_C_ActorToMap_Params Parms{};

	Parms.Actor = Actor;
	Parms.Min = Min;
	Parms.Max = Max;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_InvertTransform_ReturnValue = CallFunc_InvertTransform_ReturnValue;
	Parms.CallFunc_MapPositionToMinimap_Pos = CallFunc_MapPositionToMinimap_Pos;
	Parms.CallFunc_MapPositionToMinimap_Angle = CallFunc_MapPositionToMinimap_Angle;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Pos != nullptr)
		*Pos = std::move(Parms.Pos);

	if (Angle != nullptr)
		*Angle = Parms.Angle;

}


// Function ba_Minimap.ba_Minimap_C.GetPlayerPos
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Min                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Pos                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_InvertTransform_ReturnValue                             (IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MapPositionToMinimap_Pos                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapPositionToMinimap_Angle                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_Minimap_C::GetPlayerPos(const struct FVector2D& Min, const struct FVector2D& Max, struct FVector2D* Pos, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FTransform& CallFunc_InvertTransform_ReturnValue, const struct FVector2D& CallFunc_MapPositionToMinimap_Pos, float CallFunc_MapPositionToMinimap_Angle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Minimap_C", "GetPlayerPos");

	Params::Aba_Minimap_C_GetPlayerPos_Params Parms{};

	Parms.Min = Min;
	Parms.Max = Max;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_InvertTransform_ReturnValue = CallFunc_InvertTransform_ReturnValue;
	Parms.CallFunc_MapPositionToMinimap_Pos = CallFunc_MapPositionToMinimap_Pos;
	Parms.CallFunc_MapPositionToMinimap_Angle = CallFunc_MapPositionToMinimap_Angle;

	UObject::ProcessEvent(Func, &Parms);

	if (Pos != nullptr)
		*Pos = std::move(Parms.Pos);

}


// Function ba_Minimap.ba_Minimap_C.MapPositionToMinimap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  T                                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Min                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Pos                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Angle                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_TransformLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DVector2D_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_Minimap_C::MapPositionToMinimap(struct FTransform& T, class AActor* Actor, const struct FVector2D& Min, const struct FVector2D& Max, struct FVector2D* Pos, float* Angle, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Minimap_C", "MapPositionToMinimap");

	Params::Aba_Minimap_C_MapPositionToMinimap_Params Parms{};

	Parms.T = T;
	Parms.Actor = Actor;
	Parms.Min = Min;
	Parms.Max = Max;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_TransformLocation_ReturnValue = CallFunc_TransformLocation_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue = CallFunc_Divide_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorFloat_ReturnValue = CallFunc_Add_VectorFloat_ReturnValue;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue_1 = CallFunc_Divide_VectorFloat_ReturnValue_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue_1 = CallFunc_Subtract_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_Divide_Vector2DVector2D_ReturnValue = CallFunc_Divide_Vector2DVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Pos != nullptr)
		*Pos = std::move(Parms.Pos);

	if (Angle != nullptr)
		*Angle = Parms.Angle;

}


// Function ba_Minimap.ba_Minimap_C.GetPotentialTags
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Min                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSt_MinimapInfo>     Result1                                                          (Parm, OutParm)
// class ACGCharacter*                LocalCharacter                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_MinimapTag_C*            LocalCustomTag                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSt_MinimapInfo>     Result                                                           (Edit, BlueprintVisible)
// struct FTransform                  InvTransform                                                     (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetImage_Image                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MapPositionToMinimap_Pos                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapPositionToMinimap_Angle                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_MinimapInfo             K2Node_MakeStruct_st_MinimapInfo                                 (HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AABB2D_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ACGCharacter*>        CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ACGCharacter*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class Abp_MinimapTag_C>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MapPositionToMinimap_Pos_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapPositionToMinimap_Angle_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_MinimapInfo             K2Node_MakeStruct_st_MinimapInfo_1                               (HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AABB2D_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// TArray<class Abp_MinimapTag_C*>    CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm)
// struct FTransform                  CallFunc_InvertTransform_ReturnValue                             (IsPlainOldData, NoDestructor)
// class Abp_MinimapTag_C*            CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_IsEnabled                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_Minimap_C::GetPotentialTags(const struct FVector2D& Min, const struct FVector2D& Max, TArray<struct FSt_MinimapInfo>* Result1, class ACGCharacter* LocalCharacter, class Abp_MinimapTag_C* LocalCustomTag, const TArray<struct FSt_MinimapInfo>& Result, const struct FTransform& InvTransform, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UClass* CallFunc_GetObjectClass_ReturnValue, class UTexture2D* CallFunc_GetImage_Image, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FVector2D& CallFunc_MapPositionToMinimap_Pos, float CallFunc_MapPositionToMinimap_Angle, const struct FSt_MinimapInfo& K2Node_MakeStruct_st_MinimapInfo, const struct FVector2D& CallFunc_Add_Vector2DFloat_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_AABB2D_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class ACGCharacter*>& CallFunc_GetAllActorsOfClass_OutActors, class ACGCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TSoftObjectPtr<class Abp_MinimapTag_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FVector2D& CallFunc_MapPositionToMinimap_Pos_1, float CallFunc_MapPositionToMinimap_Angle_1, const struct FSt_MinimapInfo& K2Node_MakeStruct_st_MinimapInfo_1, const struct FVector2D& CallFunc_Add_Vector2DFloat_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_AABB2D_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, TArray<class Abp_MinimapTag_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, const struct FTransform& CallFunc_InvertTransform_ReturnValue, class Abp_MinimapTag_C* CallFunc_Array_Get_Item_1, bool CallFunc_GetIsEnabled_IsEnabled, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Minimap_C", "GetPotentialTags");

	Params::Aba_Minimap_C_GetPotentialTags_Params Parms{};

	Parms.Min = Min;
	Parms.Max = Max;
	Parms.LocalCharacter = LocalCharacter;
	Parms.LocalCustomTag = LocalCustomTag;
	Parms.Result = Result;
	Parms.InvTransform = InvTransform;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetImage_Image = CallFunc_GetImage_Image;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_MapPositionToMinimap_Pos = CallFunc_MapPositionToMinimap_Pos;
	Parms.CallFunc_MapPositionToMinimap_Angle = CallFunc_MapPositionToMinimap_Angle;
	Parms.K2Node_MakeStruct_st_MinimapInfo = K2Node_MakeStruct_st_MinimapInfo;
	Parms.CallFunc_Add_Vector2DFloat_ReturnValue = CallFunc_Add_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AABB2D_ReturnValue = CallFunc_AABB2D_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_MapPositionToMinimap_Pos_1 = CallFunc_MapPositionToMinimap_Pos_1;
	Parms.CallFunc_MapPositionToMinimap_Angle_1 = CallFunc_MapPositionToMinimap_Angle_1;
	Parms.K2Node_MakeStruct_st_MinimapInfo_1 = K2Node_MakeStruct_st_MinimapInfo_1;
	Parms.CallFunc_Add_Vector2DFloat_ReturnValue_1 = CallFunc_Add_Vector2DFloat_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_AABB2D_ReturnValue_1 = CallFunc_AABB2D_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_InvertTransform_ReturnValue = CallFunc_InvertTransform_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetIsEnabled_IsEnabled = CallFunc_GetIsEnabled_IsEnabled;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result1 != nullptr)
		*Result1 = std::move(Parms.Result1);

}


// Function ba_Minimap.ba_Minimap_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_Minimap_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Minimap_C", "ReceiveTick");

	Params::Aba_Minimap_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_Minimap.ba_Minimap_C.Capture
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_Minimap_C::Capture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Minimap_C", "Capture");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_Minimap.ba_Minimap_C.ExecuteUbergraph_ba_Minimap
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_Minimap_C::ExecuteUbergraph_ba_Minimap(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Minimap_C", "ExecuteUbergraph_ba_Minimap");

	Params::Aba_Minimap_C_ExecuteUbergraph_ba_Minimap_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


