#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ALS_Camera_BPI.ALS_Camera_BPI_C
// (None)

class UClass* IALS_Camera_BPI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALS_Camera_BPI_C");

	return Clss;
}


// ALS_Camera_BPI_C ALS_Camera_BPI.Default__ALS_Camera_BPI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IALS_Camera_BPI_C* IALS_Camera_BPI_C::GetDefaultObj()
{
	static class IALS_Camera_BPI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IALS_Camera_BPI_C*>(IALS_Camera_BPI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_3P_TraceParams
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     TraceOrigin                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TraceRadius                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETraceTypeQuery         TraceChannel                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IALS_Camera_BPI_C::BPI_Get_3P_TraceParams(struct FVector* TraceOrigin, float* TraceRadius, enum class ETraceTypeQuery* TraceChannel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_Camera_BPI_C", "BPI_Get_3P_TraceParams");

	Params::IALS_Camera_BPI_C_BPI_Get_3P_TraceParams_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TraceOrigin != nullptr)
		*TraceOrigin = std::move(Parms.TraceOrigin);

	if (TraceRadius != nullptr)
		*TraceRadius = Parms.TraceRadius;

	if (TraceChannel != nullptr)
		*TraceChannel = Parms.TraceChannel;

}


// Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_3P_PivotTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)

struct FTransform IALS_Camera_BPI_C::BPI_Get_3P_PivotTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_Camera_BPI_C", "BPI_Get_3P_PivotTarget");

	Params::IALS_Camera_BPI_C_BPI_Get_3P_PivotTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_FP_CameraTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector IALS_Camera_BPI_C::BPI_Get_FP_CameraTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_Camera_BPI_C", "BPI_Get_FP_CameraTarget");

	Params::IALS_Camera_BPI_C_BPI_Get_FP_CameraTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_CameraParameters
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TP_FOV                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FP_FOV                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RightShoulder                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IALS_Camera_BPI_C::BPI_Get_CameraParameters(float* TP_FOV, float* FP_FOV, bool* RightShoulder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_Camera_BPI_C", "BPI_Get_CameraParameters");

	Params::IALS_Camera_BPI_C_BPI_Get_CameraParameters_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TP_FOV != nullptr)
		*TP_FOV = Parms.TP_FOV;

	if (FP_FOV != nullptr)
		*FP_FOV = Parms.FP_FOV;

	if (RightShoulder != nullptr)
		*RightShoulder = Parms.RightShoulder;

}

}


