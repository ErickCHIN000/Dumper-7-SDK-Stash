#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_AI.BPI_AI_C
// (None)

class UClass* IBPI_AI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_AI_C");

	return Clss;
}


// BPI_AI_C BPI_AI.Default__BPI_AI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_AI_C* IBPI_AI_C::GetDefaultObj()
{
	static class IBPI_AI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_AI_C*>(IBPI_AI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_AI.BPI_AI_C.GetMarker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MarkerOffset                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AI_C::GetMarker(class UTexture2D** Texture, struct FLinearColor* Color, double* MarkerOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AI_C", "GetMarker");

	Params::IBPI_AI_C_GetMarker_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (MarkerOffset != nullptr)
		*MarkerOffset = Parms.MarkerOffset;

}


// Function BPI_AI.BPI_AI_C.CanAddMarkerToAI?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanAdd_                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AI_C::CanAddMarkerToAI_(bool* CanAdd_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AI_C", "CanAddMarkerToAI?");

	Params::IBPI_AI_C_CanAddMarkerToAI__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanAdd_ != nullptr)
		*CanAdd_ = Parms.CanAdd_;

}


// Function BPI_AI.BPI_AI_C.AddMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*            Marker                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_AI_C::AddMarker(class UWidgetComponent* Marker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AI_C", "AddMarker");

	Params::IBPI_AI_C_AddMarker_Params Parms{};

	Parms.Marker = Marker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_AI.BPI_AI_C.GetMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_AI_C::GetMesh(class USkeletalMeshComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AI_C", "GetMesh");

	Params::IBPI_AI_C_GetMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function BPI_AI.BPI_AI_C.GetMovementSpeeds
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             RoamingSpeed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AlertSpeed                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AttackSpeed                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AI_C::GetMovementSpeeds(double* RoamingSpeed, double* AlertSpeed, double* AttackSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AI_C", "GetMovementSpeeds");

	Params::IBPI_AI_C_GetMovementSpeeds_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RoamingSpeed != nullptr)
		*RoamingSpeed = Parms.RoamingSpeed;

	if (AlertSpeed != nullptr)
		*AlertSpeed = Parms.AlertSpeed;

	if (AttackSpeed != nullptr)
		*AttackSpeed = Parms.AttackSpeed;

}


// Function BPI_AI.BPI_AI_C.CanStompAI?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Stomp_                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AI_C::CanStompAI_(bool* Stomp_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AI_C", "CanStompAI?");

	Params::IBPI_AI_C_CanStompAI__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Stomp_ != nullptr)
		*Stomp_ = Parms.Stomp_;

}


// Function BPI_AI.BPI_AI_C.AIHealthBarInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Boss_                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AI_C::AIHealthBarInfo(class FString* Name, bool* Boss_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AI_C", "AIHealthBarInfo");

	Params::IBPI_AI_C_AIHealthBarInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (Boss_ != nullptr)
		*Boss_ = Parms.Boss_;

}

}


