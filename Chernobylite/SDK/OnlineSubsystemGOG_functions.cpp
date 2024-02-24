#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OnlineSubsystemGOG.GOGLoginCallbackProxy
// (None)

class UClass* UGOGLoginCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GOGLoginCallbackProxy");

	return Clss;
}


// GOGLoginCallbackProxy OnlineSubsystemGOG.Default__GOGLoginCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGOGLoginCallbackProxy* UGOGLoginCallbackProxy::GetDefaultObj()
{
	static class UGOGLoginCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UGOGLoginCallbackProxy*>(UGOGLoginCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemGOG.GOGLoginCallbackProxy.Login
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AuthType                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UserID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UserToken                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGOGLoginCallbackProxy*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGOGLoginCallbackProxy* UGOGLoginCallbackProxy::Login(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& AuthType, const class FString& UserID, const class FString& UserToken)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GOGLoginCallbackProxy", "Login");

	Params::UGOGLoginCallbackProxy_Login_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.AuthType = AuthType;
	Parms.UserID = UserID;
	Parms.UserToken = UserToken;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemGOG.NetConnectionGOG
// (None)

class UClass* UNetConnectionGOG::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetConnectionGOG");

	return Clss;
}


// NetConnectionGOG OnlineSubsystemGOG.Default__NetConnectionGOG
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetConnectionGOG* UNetConnectionGOG::GetDefaultObj()
{
	static class UNetConnectionGOG* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetConnectionGOG*>(UNetConnectionGOG::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemGOG.NetDriverGOG
// (None)

class UClass* UNetDriverGOG::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetDriverGOG");

	return Clss;
}


// NetDriverGOG OnlineSubsystemGOG.Default__NetDriverGOG
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetDriverGOG* UNetDriverGOG::GetDefaultObj()
{
	static class UNetDriverGOG* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetDriverGOG*>(UNetDriverGOG::StaticClass()->DefaultObject);

	return Default;
}

}


