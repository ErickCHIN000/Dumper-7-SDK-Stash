#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_NPCInfoForUI.BPI_NPCInfoForUI_C
// (None)

class UClass* IBPI_NPCInfoForUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_NPCInfoForUI_C");

	return Clss;
}


// BPI_NPCInfoForUI_C BPI_NPCInfoForUI.Default__BPI_NPCInfoForUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_NPCInfoForUI_C* IBPI_NPCInfoForUI_C::GetDefaultObj()
{
	static class IBPI_NPCInfoForUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_NPCInfoForUI_C*>(IBPI_NPCInfoForUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_NPCInfoForUI.BPI_NPCInfoForUI_C.GetContractInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OnContract                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       EmployerPawn                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              ContractCost                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OrderTarget                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCInfoForUI_C::GetContractInfo(bool* OnContract, class APawn** EmployerPawn, int32* ContractCost, class AActor** OrderTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCInfoForUI_C", "GetContractInfo");

	Params::IBPI_NPCInfoForUI_C_GetContractInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OnContract != nullptr)
		*OnContract = Parms.OnContract;

	if (EmployerPawn != nullptr)
		*EmployerPawn = Parms.EmployerPawn;

	if (ContractCost != nullptr)
		*ContractCost = Parms.ContractCost;

	if (OrderTarget != nullptr)
		*OrderTarget = Parms.OrderTarget;

}


// Function BPI_NPCInfoForUI.BPI_NPCInfoForUI_C.GetFriendship
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_FriendshipLevel    FriendshipLevel                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FriendshipScore                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsBestFriend                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             FriendshipLevelRatio                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FriendshipLevelScore                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FriendshipLevelMaxScore                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCInfoForUI_C::GetFriendship(enum class Enum_FriendshipLevel* FriendshipLevel, int32* FriendshipScore, bool* IsBestFriend, double* FriendshipLevelRatio, int32* FriendshipLevelScore, int32* FriendshipLevelMaxScore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCInfoForUI_C", "GetFriendship");

	Params::IBPI_NPCInfoForUI_C_GetFriendship_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FriendshipLevel != nullptr)
		*FriendshipLevel = Parms.FriendshipLevel;

	if (FriendshipScore != nullptr)
		*FriendshipScore = Parms.FriendshipScore;

	if (IsBestFriend != nullptr)
		*IsBestFriend = Parms.IsBestFriend;

	if (FriendshipLevelRatio != nullptr)
		*FriendshipLevelRatio = Parms.FriendshipLevelRatio;

	if (FriendshipLevelScore != nullptr)
		*FriendshipLevelScore = Parms.FriendshipLevelScore;

	if (FriendshipLevelMaxScore != nullptr)
		*FriendshipLevelMaxScore = Parms.FriendshipLevelMaxScore;

}


// Function BPI_NPCInfoForUI.BPI_NPCInfoForUI_C.GetCreatureInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        UIName                                                           (Parm, OutParm)
// class FText                        UIDescription                                                    (Parm, OutParm)
// class UTexture2D*                  UIIcon                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCInfoForUI_C::GetCreatureInfo(class FText* UIName, class FText* UIDescription, class UTexture2D** UIIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCInfoForUI_C", "GetCreatureInfo");

	Params::IBPI_NPCInfoForUI_C_GetCreatureInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UIName != nullptr)
		*UIName = Parms.UIName;

	if (UIDescription != nullptr)
		*UIDescription = Parms.UIDescription;

	if (UIIcon != nullptr)
		*UIIcon = Parms.UIIcon;

}

}


