#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraModifier_FOV.CameraModifier_FOV_C
// (None)

class UClass* UCameraModifier_FOV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraModifier_FOV_C");

	return Clss;
}


// CameraModifier_FOV_C CameraModifier_FOV.Default__CameraModifier_FOV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraModifier_FOV_C* UCameraModifier_FOV_C::GetDefaultObj()
{
	static class UCameraModifier_FOV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraModifier_FOV_C*>(UCameraModifier_FOV_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CameraModifier_FOV.CameraModifier_FOV_C.BlueprintModifyCamera
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ViewLocation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    ViewRotation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              FOV                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NewViewLocation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    NewViewRotation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              NewFOV                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_FOV_New                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_FOV_Original                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraModifier_FOV_C::BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV, float Local_FOV_New, float Local_FOV_Original, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraModifier_FOV_C", "BlueprintModifyCamera");

	Params::UCameraModifier_FOV_C_BlueprintModifyCamera_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.ViewLocation = ViewLocation;
	Parms.ViewRotation = ViewRotation;
	Parms.FOV = FOV;
	Parms.Local_FOV_New = Local_FOV_New;
	Parms.Local_FOV_Original = Local_FOV_Original;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (NewViewLocation != nullptr)
		*NewViewLocation = std::move(Parms.NewViewLocation);

	if (NewViewRotation != nullptr)
		*NewViewRotation = std::move(Parms.NewViewRotation);

	if (NewFOV != nullptr)
		*NewFOV = Parms.NewFOV;

}

}


