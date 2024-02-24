#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OnlineSubsystemIcarus.AbandonProspectCallbackProxyGen
// (None)

class UClass* UAbandonProspectCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbandonProspectCallbackProxyGen");

	return Clss;
}


// AbandonProspectCallbackProxyGen OnlineSubsystemIcarus.Default__AbandonProspectCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbandonProspectCallbackProxyGen* UAbandonProspectCallbackProxyGen::GetDefaultObj()
{
	static class UAbandonProspectCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbandonProspectCallbackProxyGen*>(UAbandonProspectCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.AbandonProspectCallbackProxyGen.AbandonProspect
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqAbandonProspect         Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UAbandonProspectCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbandonProspectCallbackProxyGen* UAbandonProspectCallbackProxyGen::AbandonProspect(struct FReqAbandonProspect& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbandonProspectCallbackProxyGen", "AbandonProspect");

	Params::UAbandonProspectCallbackProxyGen_AbandonProspect_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.BackToHabCallbackProxyGen
// (None)

class UClass* UBackToHabCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BackToHabCallbackProxyGen");

	return Clss;
}


// BackToHabCallbackProxyGen OnlineSubsystemIcarus.Default__BackToHabCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UBackToHabCallbackProxyGen* UBackToHabCallbackProxyGen::GetDefaultObj()
{
	static class UBackToHabCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UBackToHabCallbackProxyGen*>(UBackToHabCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.BackToHabCallbackProxyGen.BackToHab
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqBackToHab               Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UBackToHabCallbackProxyGen*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBackToHabCallbackProxyGen* UBackToHabCallbackProxyGen::BackToHab(struct FReqBackToHab& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackToHabCallbackProxyGen", "BackToHab");

	Params::UBackToHabCallbackProxyGen_BackToHab_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.CanJoinProspectCallbackProxyGen
// (None)

class UClass* UCanJoinProspectCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CanJoinProspectCallbackProxyGen");

	return Clss;
}


// CanJoinProspectCallbackProxyGen OnlineSubsystemIcarus.Default__CanJoinProspectCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UCanJoinProspectCallbackProxyGen* UCanJoinProspectCallbackProxyGen::GetDefaultObj()
{
	static class UCanJoinProspectCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UCanJoinProspectCallbackProxyGen*>(UCanJoinProspectCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.CanJoinProspectCallbackProxyGen.CanJoinProspect
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqCanJoinProspect         Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UCanJoinProspectCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCanJoinProspectCallbackProxyGen* UCanJoinProspectCallbackProxyGen::CanJoinProspect(struct FReqCanJoinProspect& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanJoinProspectCallbackProxyGen", "CanJoinProspect");

	Params::UCanJoinProspectCallbackProxyGen_CanJoinProspect_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.CheckProspectExpiredCallbackProxyGen
// (None)

class UClass* UCheckProspectExpiredCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheckProspectExpiredCallbackProxyGen");

	return Clss;
}


// CheckProspectExpiredCallbackProxyGen OnlineSubsystemIcarus.Default__CheckProspectExpiredCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UCheckProspectExpiredCallbackProxyGen* UCheckProspectExpiredCallbackProxyGen::GetDefaultObj()
{
	static class UCheckProspectExpiredCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheckProspectExpiredCallbackProxyGen*>(UCheckProspectExpiredCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.CheckProspectExpiredCallbackProxyGen.CheckProspectExpired
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqCheckProspectExpired    Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UCheckProspectExpiredCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCheckProspectExpiredCallbackProxyGen* UCheckProspectExpiredCallbackProxyGen::CheckProspectExpired(struct FReqCheckProspectExpired& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckProspectExpiredCallbackProxyGen", "CheckProspectExpired");

	Params::UCheckProspectExpiredCallbackProxyGen_CheckProspectExpired_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.ClaimNotificationAttachmentsCallbackProxyGen
// (None)

class UClass* UClaimNotificationAttachmentsCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClaimNotificationAttachmentsCallbackProxyGen");

	return Clss;
}


// ClaimNotificationAttachmentsCallbackProxyGen OnlineSubsystemIcarus.Default__ClaimNotificationAttachmentsCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UClaimNotificationAttachmentsCallbackProxyGen* UClaimNotificationAttachmentsCallbackProxyGen::GetDefaultObj()
{
	static class UClaimNotificationAttachmentsCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UClaimNotificationAttachmentsCallbackProxyGen*>(UClaimNotificationAttachmentsCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.ClaimNotificationAttachmentsCallbackProxyGen.ClaimNotificationAttachments
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqClaimNotificationAttachmentsRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UClaimNotificationAttachmentsCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClaimNotificationAttachmentsCallbackProxyGen* UClaimNotificationAttachmentsCallbackProxyGen::ClaimNotificationAttachments(struct FReqClaimNotificationAttachments& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClaimNotificationAttachmentsCallbackProxyGen", "ClaimNotificationAttachments");

	Params::UClaimNotificationAttachmentsCallbackProxyGen_ClaimNotificationAttachments_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.ClaimProspectCallbackProxyGen
// (None)

class UClass* UClaimProspectCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClaimProspectCallbackProxyGen");

	return Clss;
}


// ClaimProspectCallbackProxyGen OnlineSubsystemIcarus.Default__ClaimProspectCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UClaimProspectCallbackProxyGen* UClaimProspectCallbackProxyGen::GetDefaultObj()
{
	static class UClaimProspectCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UClaimProspectCallbackProxyGen*>(UClaimProspectCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.ClaimProspectCallbackProxyGen.ClaimProspect
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqClaimProspect           Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UClaimProspectCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClaimProspectCallbackProxyGen* UClaimProspectCallbackProxyGen::ClaimProspect(struct FReqClaimProspect& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClaimProspectCallbackProxyGen", "ClaimProspect");

	Params::UClaimProspectCallbackProxyGen_ClaimProspect_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.CreateCharacterCallbackProxyGen
// (None)

class UClass* UCreateCharacterCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreateCharacterCallbackProxyGen");

	return Clss;
}


// CreateCharacterCallbackProxyGen OnlineSubsystemIcarus.Default__CreateCharacterCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UCreateCharacterCallbackProxyGen* UCreateCharacterCallbackProxyGen::GetDefaultObj()
{
	static class UCreateCharacterCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreateCharacterCallbackProxyGen*>(UCreateCharacterCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.CreateCharacterCallbackProxyGen.CreateCharacter
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqCreateCharacter         Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UCreateCharacterCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCreateCharacterCallbackProxyGen* UCreateCharacterCallbackProxyGen::CreateCharacter(struct FReqCreateCharacter& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreateCharacterCallbackProxyGen", "CreateCharacter");

	Params::UCreateCharacterCallbackProxyGen_CreateCharacter_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.CreateDropshipCallbackProxyGen
// (None)

class UClass* UCreateDropshipCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreateDropshipCallbackProxyGen");

	return Clss;
}


// CreateDropshipCallbackProxyGen OnlineSubsystemIcarus.Default__CreateDropshipCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UCreateDropshipCallbackProxyGen* UCreateDropshipCallbackProxyGen::GetDefaultObj()
{
	static class UCreateDropshipCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreateDropshipCallbackProxyGen*>(UCreateDropshipCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.CreateDropshipCallbackProxyGen.CreateDropship
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqCreateDropship          Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UCreateDropshipCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCreateDropshipCallbackProxyGen* UCreateDropshipCallbackProxyGen::CreateDropship(struct FReqCreateDropship& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreateDropshipCallbackProxyGen", "CreateDropship");

	Params::UCreateDropshipCallbackProxyGen_CreateDropship_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.DeleteCharacterCallbackProxyGen
// (None)

class UClass* UDeleteCharacterCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeleteCharacterCallbackProxyGen");

	return Clss;
}


// DeleteCharacterCallbackProxyGen OnlineSubsystemIcarus.Default__DeleteCharacterCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UDeleteCharacterCallbackProxyGen* UDeleteCharacterCallbackProxyGen::GetDefaultObj()
{
	static class UDeleteCharacterCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeleteCharacterCallbackProxyGen*>(UDeleteCharacterCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.DeleteCharacterCallbackProxyGen.DeleteCharacter
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqDeleteCharacter         Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UDeleteCharacterCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDeleteCharacterCallbackProxyGen* UDeleteCharacterCallbackProxyGen::DeleteCharacter(struct FReqDeleteCharacter& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeleteCharacterCallbackProxyGen", "DeleteCharacter");

	Params::UDeleteCharacterCallbackProxyGen_DeleteCharacter_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.DeleteDropshipCallbackProxyGen
// (None)

class UClass* UDeleteDropshipCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeleteDropshipCallbackProxyGen");

	return Clss;
}


// DeleteDropshipCallbackProxyGen OnlineSubsystemIcarus.Default__DeleteDropshipCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UDeleteDropshipCallbackProxyGen* UDeleteDropshipCallbackProxyGen::GetDefaultObj()
{
	static class UDeleteDropshipCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeleteDropshipCallbackProxyGen*>(UDeleteDropshipCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.DeleteDropshipCallbackProxyGen.DeleteDropship
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqDeleteDropship          Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UDeleteDropshipCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDeleteDropshipCallbackProxyGen* UDeleteDropshipCallbackProxyGen::DeleteDropship(struct FReqDeleteDropship& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeleteDropshipCallbackProxyGen", "DeleteDropship");

	Params::UDeleteDropshipCallbackProxyGen_DeleteDropship_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.DeleteNotificationCallbackProxyGen
// (None)

class UClass* UDeleteNotificationCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeleteNotificationCallbackProxyGen");

	return Clss;
}


// DeleteNotificationCallbackProxyGen OnlineSubsystemIcarus.Default__DeleteNotificationCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UDeleteNotificationCallbackProxyGen* UDeleteNotificationCallbackProxyGen::GetDefaultObj()
{
	static class UDeleteNotificationCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeleteNotificationCallbackProxyGen*>(UDeleteNotificationCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.DeleteNotificationCallbackProxyGen.DeleteNotification
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqDeleteNotification      Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UDeleteNotificationCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDeleteNotificationCallbackProxyGen* UDeleteNotificationCallbackProxyGen::DeleteNotification(struct FReqDeleteNotification& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeleteNotificationCallbackProxyGen", "DeleteNotification");

	Params::UDeleteNotificationCallbackProxyGen_DeleteNotification_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.ExchangeCurrencyCallbackProxyGen
// (None)

class UClass* UExchangeCurrencyCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExchangeCurrencyCallbackProxyGen");

	return Clss;
}


// ExchangeCurrencyCallbackProxyGen OnlineSubsystemIcarus.Default__ExchangeCurrencyCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UExchangeCurrencyCallbackProxyGen* UExchangeCurrencyCallbackProxyGen::GetDefaultObj()
{
	static class UExchangeCurrencyCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UExchangeCurrencyCallbackProxyGen*>(UExchangeCurrencyCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.ExchangeCurrencyCallbackProxyGen.ExchangeCurrency
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqExchangeCurrency        Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UExchangeCurrencyCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UExchangeCurrencyCallbackProxyGen* UExchangeCurrencyCallbackProxyGen::ExchangeCurrency(struct FReqExchangeCurrency& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExchangeCurrencyCallbackProxyGen", "ExchangeCurrency");

	Params::UExchangeCurrencyCallbackProxyGen_ExchangeCurrency_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.GenerateProspectsCallbackProxyGen
// (None)

class UClass* UGenerateProspectsCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenerateProspectsCallbackProxyGen");

	return Clss;
}


// GenerateProspectsCallbackProxyGen OnlineSubsystemIcarus.Default__GenerateProspectsCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGenerateProspectsCallbackProxyGen* UGenerateProspectsCallbackProxyGen::GetDefaultObj()
{
	static class UGenerateProspectsCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UGenerateProspectsCallbackProxyGen*>(UGenerateProspectsCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.GenerateProspectsCallbackProxyGen.GenerateProspects
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqGenerateProspects       Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UGenerateProspectsCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGenerateProspectsCallbackProxyGen* UGenerateProspectsCallbackProxyGen::GenerateProspects(struct FReqGenerateProspects& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenerateProspectsCallbackProxyGen", "GenerateProspects");

	Params::UGenerateProspectsCallbackProxyGen_GenerateProspects_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.GetAllProspectsCallbackProxyGen
// (None)

class UClass* UGetAllProspectsCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetAllProspectsCallbackProxyGen");

	return Clss;
}


// GetAllProspectsCallbackProxyGen OnlineSubsystemIcarus.Default__GetAllProspectsCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGetAllProspectsCallbackProxyGen* UGetAllProspectsCallbackProxyGen::GetDefaultObj()
{
	static class UGetAllProspectsCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetAllProspectsCallbackProxyGen*>(UGetAllProspectsCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.GetAllProspectsCallbackProxyGen.GetAllProspects
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqGetAllProspects         Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UGetAllProspectsCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGetAllProspectsCallbackProxyGen* UGetAllProspectsCallbackProxyGen::GetAllProspects(struct FReqGetAllProspects& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetAllProspectsCallbackProxyGen", "GetAllProspects");

	Params::UGetAllProspectsCallbackProxyGen_GetAllProspects_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.GetAvailableProspectsCallbackProxyGen
// (None)

class UClass* UGetAvailableProspectsCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetAvailableProspectsCallbackProxyGen");

	return Clss;
}


// GetAvailableProspectsCallbackProxyGen OnlineSubsystemIcarus.Default__GetAvailableProspectsCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGetAvailableProspectsCallbackProxyGen* UGetAvailableProspectsCallbackProxyGen::GetDefaultObj()
{
	static class UGetAvailableProspectsCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetAvailableProspectsCallbackProxyGen*>(UGetAvailableProspectsCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.GetAvailableProspectsCallbackProxyGen.GetAvailableProspects
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqGetAvailableProspects   Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UGetAvailableProspectsCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGetAvailableProspectsCallbackProxyGen* UGetAvailableProspectsCallbackProxyGen::GetAvailableProspects(struct FReqGetAvailableProspects& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetAvailableProspectsCallbackProxyGen", "GetAvailableProspects");

	Params::UGetAvailableProspectsCallbackProxyGen_GetAvailableProspects_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.GetChallengesCallbackProxyGen
// (None)

class UClass* UGetChallengesCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetChallengesCallbackProxyGen");

	return Clss;
}


// GetChallengesCallbackProxyGen OnlineSubsystemIcarus.Default__GetChallengesCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGetChallengesCallbackProxyGen* UGetChallengesCallbackProxyGen::GetDefaultObj()
{
	static class UGetChallengesCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetChallengesCallbackProxyGen*>(UGetChallengesCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.GetChallengesCallbackProxyGen.GetChallenges
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqGetChallenges           Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UGetChallengesCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGetChallengesCallbackProxyGen* UGetChallengesCallbackProxyGen::GetChallenges(struct FReqGetChallenges& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetChallengesCallbackProxyGen", "GetChallenges");

	Params::UGetChallengesCallbackProxyGen_GetChallenges_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.GetCharacterLoadoutCallbackProxyGen
// (None)

class UClass* UGetCharacterLoadoutCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetCharacterLoadoutCallbackProxyGen");

	return Clss;
}


// GetCharacterLoadoutCallbackProxyGen OnlineSubsystemIcarus.Default__GetCharacterLoadoutCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGetCharacterLoadoutCallbackProxyGen* UGetCharacterLoadoutCallbackProxyGen::GetDefaultObj()
{
	static class UGetCharacterLoadoutCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetCharacterLoadoutCallbackProxyGen*>(UGetCharacterLoadoutCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.GetCharacterLoadoutCallbackProxyGen.GetCharacterLoadout
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqGetCharacterLoadout     Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UGetCharacterLoadoutCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGetCharacterLoadoutCallbackProxyGen* UGetCharacterLoadoutCallbackProxyGen::GetCharacterLoadout(struct FReqGetCharacterLoadout& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetCharacterLoadoutCallbackProxyGen", "GetCharacterLoadout");

	Params::UGetCharacterLoadoutCallbackProxyGen_GetCharacterLoadout_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.GetCharacterProfileCallbackProxyGen
// (None)

class UClass* UGetCharacterProfileCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetCharacterProfileCallbackProxyGen");

	return Clss;
}


// GetCharacterProfileCallbackProxyGen OnlineSubsystemIcarus.Default__GetCharacterProfileCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGetCharacterProfileCallbackProxyGen* UGetCharacterProfileCallbackProxyGen::GetDefaultObj()
{
	static class UGetCharacterProfileCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetCharacterProfileCallbackProxyGen*>(UGetCharacterProfileCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.GetCharacterProfileCallbackProxyGen.GetCharacterProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqGetCharacterProfile     Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UGetCharacterProfileCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGetCharacterProfileCallbackProxyGen* UGetCharacterProfileCallbackProxyGen::GetCharacterProfile(struct FReqGetCharacterProfile& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetCharacterProfileCallbackProxyGen", "GetCharacterProfile");

	Params::UGetCharacterProfileCallbackProxyGen_GetCharacterProfile_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.GetCharactersCallbackProxyGen
// (None)

class UClass* UGetCharactersCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetCharactersCallbackProxyGen");

	return Clss;
}


// GetCharactersCallbackProxyGen OnlineSubsystemIcarus.Default__GetCharactersCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGetCharactersCallbackProxyGen* UGetCharactersCallbackProxyGen::GetDefaultObj()
{
	static class UGetCharactersCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetCharactersCallbackProxyGen*>(UGetCharactersCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.GetCharactersCallbackProxyGen.GetCharacters
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqGetCharacters           Request                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UGetCharactersCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGetCharactersCallbackProxyGen* UGetCharactersCallbackProxyGen::GetCharacters(struct FReqGetCharacters& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetCharactersCallbackProxyGen", "GetCharacters");

	Params::UGetCharactersCallbackProxyGen_GetCharacters_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.GetCreditsCallbackProxyGen
// (None)

class UClass* UGetCreditsCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetCreditsCallbackProxyGen");

	return Clss;
}


// GetCreditsCallbackProxyGen OnlineSubsystemIcarus.Default__GetCreditsCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGetCreditsCallbackProxyGen* UGetCreditsCallbackProxyGen::GetDefaultObj()
{
	static class UGetCreditsCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetCreditsCallbackProxyGen*>(UGetCreditsCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.GetCreditsCallbackProxyGen.GetCredits
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqGetCredits              Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UGetCreditsCallbackProxyGen* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGetCreditsCallbackProxyGen* UGetCreditsCallbackProxyGen::GetCredits(struct FReqGetCredits& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetCreditsCallbackProxyGen", "GetCredits");

	Params::UGetCreditsCallbackProxyGen_GetCredits_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.GetDropshipsCallbackProxyGen
// (None)

class UClass* UGetDropshipsCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetDropshipsCallbackProxyGen");

	return Clss;
}


// GetDropshipsCallbackProxyGen OnlineSubsystemIcarus.Default__GetDropshipsCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGetDropshipsCallbackProxyGen* UGetDropshipsCallbackProxyGen::GetDefaultObj()
{
	static class UGetDropshipsCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetDropshipsCallbackProxyGen*>(UGetDropshipsCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.GetDropshipsCallbackProxyGen.GetDropships
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqGetDropships            Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UGetDropshipsCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGetDropshipsCallbackProxyGen* UGetDropshipsCallbackProxyGen::GetDropships(struct FReqGetDropships& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetDropshipsCallbackProxyGen", "GetDropships");

	Params::UGetDropshipsCallbackProxyGen_GetDropships_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.GetLastProspectCallbackProxyGen
// (None)

class UClass* UGetLastProspectCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetLastProspectCallbackProxyGen");

	return Clss;
}


// GetLastProspectCallbackProxyGen OnlineSubsystemIcarus.Default__GetLastProspectCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGetLastProspectCallbackProxyGen* UGetLastProspectCallbackProxyGen::GetDefaultObj()
{
	static class UGetLastProspectCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetLastProspectCallbackProxyGen*>(UGetLastProspectCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.GetLastProspectCallbackProxyGen.GetLastProspect
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqGetLastProspect         Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UGetLastProspectCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGetLastProspectCallbackProxyGen* UGetLastProspectCallbackProxyGen::GetLastProspect(struct FReqGetLastProspect& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetLastProspectCallbackProxyGen", "GetLastProspect");

	Params::UGetLastProspectCallbackProxyGen_GetLastProspect_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.GetLoadoutInventoryCallbackProxyGen
// (None)

class UClass* UGetLoadoutInventoryCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetLoadoutInventoryCallbackProxyGen");

	return Clss;
}


// GetLoadoutInventoryCallbackProxyGen OnlineSubsystemIcarus.Default__GetLoadoutInventoryCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGetLoadoutInventoryCallbackProxyGen* UGetLoadoutInventoryCallbackProxyGen::GetDefaultObj()
{
	static class UGetLoadoutInventoryCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetLoadoutInventoryCallbackProxyGen*>(UGetLoadoutInventoryCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.GetLoadoutInventoryCallbackProxyGen.GetLoadoutInventory
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqLoadoutInventory        Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UGetLoadoutInventoryCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGetLoadoutInventoryCallbackProxyGen* UGetLoadoutInventoryCallbackProxyGen::GetLoadoutInventory(struct FReqLoadoutInventory& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetLoadoutInventoryCallbackProxyGen", "GetLoadoutInventory");

	Params::UGetLoadoutInventoryCallbackProxyGen_GetLoadoutInventory_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.GetMetaInventoryCallbackProxyGen
// (None)

class UClass* UGetMetaInventoryCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetMetaInventoryCallbackProxyGen");

	return Clss;
}


// GetMetaInventoryCallbackProxyGen OnlineSubsystemIcarus.Default__GetMetaInventoryCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGetMetaInventoryCallbackProxyGen* UGetMetaInventoryCallbackProxyGen::GetDefaultObj()
{
	static class UGetMetaInventoryCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetMetaInventoryCallbackProxyGen*>(UGetMetaInventoryCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.GetMetaInventoryCallbackProxyGen.GetMetaInventory
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqGetMetaInventory        Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UGetMetaInventoryCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGetMetaInventoryCallbackProxyGen* UGetMetaInventoryCallbackProxyGen::GetMetaInventory(struct FReqGetMetaInventory& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetMetaInventoryCallbackProxyGen", "GetMetaInventory");

	Params::UGetMetaInventoryCallbackProxyGen_GetMetaInventory_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.GetMetaResourceCallbackProxyGen
// (None)

class UClass* UGetMetaResourceCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetMetaResourceCallbackProxyGen");

	return Clss;
}


// GetMetaResourceCallbackProxyGen OnlineSubsystemIcarus.Default__GetMetaResourceCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGetMetaResourceCallbackProxyGen* UGetMetaResourceCallbackProxyGen::GetDefaultObj()
{
	static class UGetMetaResourceCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetMetaResourceCallbackProxyGen*>(UGetMetaResourceCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.GetMetaResourceCallbackProxyGen.GetMetaResource
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqGetMetaResources        Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UGetMetaResourceCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGetMetaResourceCallbackProxyGen* UGetMetaResourceCallbackProxyGen::GetMetaResource(struct FReqGetMetaResources& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetMetaResourceCallbackProxyGen", "GetMetaResource");

	Params::UGetMetaResourceCallbackProxyGen_GetMetaResource_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.GetNotificationsCallbackProxyGen
// (None)

class UClass* UGetNotificationsCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetNotificationsCallbackProxyGen");

	return Clss;
}


// GetNotificationsCallbackProxyGen OnlineSubsystemIcarus.Default__GetNotificationsCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGetNotificationsCallbackProxyGen* UGetNotificationsCallbackProxyGen::GetDefaultObj()
{
	static class UGetNotificationsCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetNotificationsCallbackProxyGen*>(UGetNotificationsCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.GetNotificationsCallbackProxyGen.GetNotifications
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqGetNotifications        Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UGetNotificationsCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGetNotificationsCallbackProxyGen* UGetNotificationsCallbackProxyGen::GetNotifications(struct FReqGetNotifications& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetNotificationsCallbackProxyGen", "GetNotifications");

	Params::UGetNotificationsCallbackProxyGen_GetNotifications_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.GetPreparedLoadoutCallbackProxyGen
// (None)

class UClass* UGetPreparedLoadoutCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetPreparedLoadoutCallbackProxyGen");

	return Clss;
}


// GetPreparedLoadoutCallbackProxyGen OnlineSubsystemIcarus.Default__GetPreparedLoadoutCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGetPreparedLoadoutCallbackProxyGen* UGetPreparedLoadoutCallbackProxyGen::GetDefaultObj()
{
	static class UGetPreparedLoadoutCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetPreparedLoadoutCallbackProxyGen*>(UGetPreparedLoadoutCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.GetPreparedLoadoutCallbackProxyGen.GetPreparedLoadout
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqPreparedLoadout         Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UGetPreparedLoadoutCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGetPreparedLoadoutCallbackProxyGen* UGetPreparedLoadoutCallbackProxyGen::GetPreparedLoadout(struct FReqPreparedLoadout& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetPreparedLoadoutCallbackProxyGen", "GetPreparedLoadout");

	Params::UGetPreparedLoadoutCallbackProxyGen_GetPreparedLoadout_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.GetProspectCallbackProxyGen
// (None)

class UClass* UGetProspectCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetProspectCallbackProxyGen");

	return Clss;
}


// GetProspectCallbackProxyGen OnlineSubsystemIcarus.Default__GetProspectCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGetProspectCallbackProxyGen* UGetProspectCallbackProxyGen::GetDefaultObj()
{
	static class UGetProspectCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetProspectCallbackProxyGen*>(UGetProspectCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.GetProspectCallbackProxyGen.GetProspect
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqGetProspect             Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UGetProspectCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGetProspectCallbackProxyGen* UGetProspectCallbackProxyGen::GetProspect(struct FReqGetProspect& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetProspectCallbackProxyGen", "GetProspect");

	Params::UGetProspectCallbackProxyGen_GetProspect_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.GetProspectReportCallbackProxyGen
// (None)

class UClass* UGetProspectReportCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetProspectReportCallbackProxyGen");

	return Clss;
}


// GetProspectReportCallbackProxyGen OnlineSubsystemIcarus.Default__GetProspectReportCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGetProspectReportCallbackProxyGen* UGetProspectReportCallbackProxyGen::GetDefaultObj()
{
	static class UGetProspectReportCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetProspectReportCallbackProxyGen*>(UGetProspectReportCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.GetProspectReportCallbackProxyGen.GetProspectReport
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqGetProspectReport       Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UGetProspectReportCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGetProspectReportCallbackProxyGen* UGetProspectReportCallbackProxyGen::GetProspectReport(struct FReqGetProspectReport& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetProspectReportCallbackProxyGen", "GetProspectReport");

	Params::UGetProspectReportCallbackProxyGen_GetProspectReport_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.GetProspectSummaryCallbackProxyGen
// (None)

class UClass* UGetProspectSummaryCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetProspectSummaryCallbackProxyGen");

	return Clss;
}


// GetProspectSummaryCallbackProxyGen OnlineSubsystemIcarus.Default__GetProspectSummaryCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGetProspectSummaryCallbackProxyGen* UGetProspectSummaryCallbackProxyGen::GetDefaultObj()
{
	static class UGetProspectSummaryCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetProspectSummaryCallbackProxyGen*>(UGetProspectSummaryCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.GetProspectSummaryCallbackProxyGen.GetProspectSummary
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqGetProspectSummary      Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UGetProspectSummaryCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGetProspectSummaryCallbackProxyGen* UGetProspectSummaryCallbackProxyGen::GetProspectSummary(struct FReqGetProspectSummary& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetProspectSummaryCallbackProxyGen", "GetProspectSummary");

	Params::UGetProspectSummaryCallbackProxyGen_GetProspectSummary_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.GetUserProfileCallbackProxyGen
// (None)

class UClass* UGetUserProfileCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetUserProfileCallbackProxyGen");

	return Clss;
}


// GetUserProfileCallbackProxyGen OnlineSubsystemIcarus.Default__GetUserProfileCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGetUserProfileCallbackProxyGen* UGetUserProfileCallbackProxyGen::GetDefaultObj()
{
	static class UGetUserProfileCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetUserProfileCallbackProxyGen*>(UGetUserProfileCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.GetUserProfileCallbackProxyGen.GetUserProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqGetUserProfile          Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UGetUserProfileCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGetUserProfileCallbackProxyGen* UGetUserProfileCallbackProxyGen::GetUserProfile(struct FReqGetUserProfile& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetUserProfileCallbackProxyGen", "GetUserProfile");

	Params::UGetUserProfileCallbackProxyGen_GetUserProfile_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.HostCandidateCallbackProxyGen
// (None)

class UClass* UHostCandidateCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HostCandidateCallbackProxyGen");

	return Clss;
}


// HostCandidateCallbackProxyGen OnlineSubsystemIcarus.Default__HostCandidateCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UHostCandidateCallbackProxyGen* UHostCandidateCallbackProxyGen::GetDefaultObj()
{
	static class UHostCandidateCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UHostCandidateCallbackProxyGen*>(UHostCandidateCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.HostCandidateCallbackProxyGen.HostCandidate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqHostCandidate           Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UHostCandidateCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHostCandidateCallbackProxyGen* UHostCandidateCallbackProxyGen::HostCandidate(struct FReqHostCandidate& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostCandidateCallbackProxyGen", "HostCandidate");

	Params::UHostCandidateCallbackProxyGen_HostCandidate_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.IcarusConnectionComponentBase
// (None)

class UClass* UIcarusConnectionComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IcarusConnectionComponentBase");

	return Clss;
}


// IcarusConnectionComponentBase OnlineSubsystemIcarus.Default__IcarusConnectionComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UIcarusConnectionComponentBase* UIcarusConnectionComponentBase::GetDefaultObj()
{
	static class UIcarusConnectionComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UIcarusConnectionComponentBase*>(UIcarusConnectionComponentBase::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.IcarusConnectionComponentBase.IsConnected
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UIcarusConnectionComponentBase::IsConnected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusConnectionComponentBase", "IsConnected");

	Params::UIcarusConnectionComponentBase_IsConnected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemIcarus.IcarusConnectionComponentBase.GetReconnectTimer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UIcarusConnectionComponentBase::GetReconnectTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusConnectionComponentBase", "GetReconnectTimer");

	Params::UIcarusConnectionComponentBase_GetReconnectTimer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemIcarus.IcarusConnectionComponentBase.GetReconnectAttempts
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UIcarusConnectionComponentBase::GetReconnectAttempts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusConnectionComponentBase", "GetReconnectAttempts");

	Params::UIcarusConnectionComponentBase_GetReconnectAttempts_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemIcarus.IcarusConnectionComponentBase.GetLoginErrorCode
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ELoginFailure           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ELoginFailure UIcarusConnectionComponentBase::GetLoginErrorCode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusConnectionComponentBase", "GetLoginErrorCode");

	Params::UIcarusConnectionComponentBase_GetLoginErrorCode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemIcarus.IcarusConnectionComponentBase.GetAuthType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UIcarusConnectionComponentBase::GetAuthType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusConnectionComponentBase", "GetAuthType");

	Params::UIcarusConnectionComponentBase_GetAuthType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemIcarus.IcarusConnectionComponentBase.GetAuthToken
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UIcarusConnectionComponentBase::GetAuthToken()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusConnectionComponentBase", "GetAuthToken");

	Params::UIcarusConnectionComponentBase_GetAuthToken_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemIcarus.IcarusConnectionComponentBase.GetAuthId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UIcarusConnectionComponentBase::GetAuthId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusConnectionComponentBase", "GetAuthId");

	Params::UIcarusConnectionComponentBase_GetAuthId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.IcarusConnectionComponentGen
// (None)

class UClass* UIcarusConnectionComponentGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IcarusConnectionComponentGen");

	return Clss;
}


// IcarusConnectionComponentGen OnlineSubsystemIcarus.Default__IcarusConnectionComponentGen
// (Public, ClassDefaultObject, ArchetypeObject)

class UIcarusConnectionComponentGen* UIcarusConnectionComponentGen::GetDefaultObj()
{
	static class UIcarusConnectionComponentGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UIcarusConnectionComponentGen*>(UIcarusConnectionComponentGen::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemIcarus.IcarusConnectionComponent
// (None)

class UClass* UIcarusConnectionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IcarusConnectionComponent");

	return Clss;
}


// IcarusConnectionComponent OnlineSubsystemIcarus.Default__IcarusConnectionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UIcarusConnectionComponent* UIcarusConnectionComponent::GetDefaultObj()
{
	static class UIcarusConnectionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UIcarusConnectionComponent*>(UIcarusConnectionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemIcarus.IcarusLobbyConnectionComponentBase
// (None)

class UClass* UIcarusLobbyConnectionComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IcarusLobbyConnectionComponentBase");

	return Clss;
}


// IcarusLobbyConnectionComponentBase OnlineSubsystemIcarus.Default__IcarusLobbyConnectionComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UIcarusLobbyConnectionComponentBase* UIcarusLobbyConnectionComponentBase::GetDefaultObj()
{
	static class UIcarusLobbyConnectionComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UIcarusLobbyConnectionComponentBase*>(UIcarusLobbyConnectionComponentBase::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.IcarusLobbyConnectionComponentBase.IsConnected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UIcarusLobbyConnectionComponentBase::IsConnected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusLobbyConnectionComponentBase", "IsConnected");

	Params::UIcarusLobbyConnectionComponentBase_IsConnected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.IcarusLobbyConnectionComponentGen
// (None)

class UClass* UIcarusLobbyConnectionComponentGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IcarusLobbyConnectionComponentGen");

	return Clss;
}


// IcarusLobbyConnectionComponentGen OnlineSubsystemIcarus.Default__IcarusLobbyConnectionComponentGen
// (Public, ClassDefaultObject, ArchetypeObject)

class UIcarusLobbyConnectionComponentGen* UIcarusLobbyConnectionComponentGen::GetDefaultObj()
{
	static class UIcarusLobbyConnectionComponentGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UIcarusLobbyConnectionComponentGen*>(UIcarusLobbyConnectionComponentGen::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemIcarus.IcarusLobbyConnectionComponent
// (None)

class UClass* UIcarusLobbyConnectionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IcarusLobbyConnectionComponent");

	return Clss;
}


// IcarusLobbyConnectionComponent OnlineSubsystemIcarus.Default__IcarusLobbyConnectionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UIcarusLobbyConnectionComponent* UIcarusLobbyConnectionComponent::GetDefaultObj()
{
	static class UIcarusLobbyConnectionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UIcarusLobbyConnectionComponent*>(UIcarusLobbyConnectionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemIcarus.IcarusMessageListeners
// (None)

class UClass* UIcarusMessageListeners::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IcarusMessageListeners");

	return Clss;
}


// IcarusMessageListeners OnlineSubsystemIcarus.Default__IcarusMessageListeners
// (Public, ClassDefaultObject, ArchetypeObject)

class UIcarusMessageListeners* UIcarusMessageListeners::GetDefaultObj()
{
	static class UIcarusMessageListeners* Default = nullptr;

	if (!Default)
		Default = static_cast<UIcarusMessageListeners*>(UIcarusMessageListeners::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemIcarus.IcarusOfflineConnectionComponentGen
// (None)

class UClass* UIcarusOfflineConnectionComponentGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IcarusOfflineConnectionComponentGen");

	return Clss;
}


// IcarusOfflineConnectionComponentGen OnlineSubsystemIcarus.Default__IcarusOfflineConnectionComponentGen
// (Public, ClassDefaultObject, ArchetypeObject)

class UIcarusOfflineConnectionComponentGen* UIcarusOfflineConnectionComponentGen::GetDefaultObj()
{
	static class UIcarusOfflineConnectionComponentGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UIcarusOfflineConnectionComponentGen*>(UIcarusOfflineConnectionComponentGen::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemIcarus.JoinProspectCallbackProxyGen
// (None)

class UClass* UJoinProspectCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JoinProspectCallbackProxyGen");

	return Clss;
}


// JoinProspectCallbackProxyGen OnlineSubsystemIcarus.Default__JoinProspectCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UJoinProspectCallbackProxyGen* UJoinProspectCallbackProxyGen::GetDefaultObj()
{
	static class UJoinProspectCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UJoinProspectCallbackProxyGen*>(UJoinProspectCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.JoinProspectCallbackProxyGen.JoinProspect
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqJoinProspect            Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UJoinProspectCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJoinProspectCallbackProxyGen* UJoinProspectCallbackProxyGen::JoinProspect(struct FReqJoinProspect& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JoinProspectCallbackProxyGen", "JoinProspect");

	Params::UJoinProspectCallbackProxyGen_JoinProspect_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.LobbyMessageCallbackProxyGen
// (None)

class UClass* ULobbyMessageCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LobbyMessageCallbackProxyGen");

	return Clss;
}


// LobbyMessageCallbackProxyGen OnlineSubsystemIcarus.Default__LobbyMessageCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class ULobbyMessageCallbackProxyGen* ULobbyMessageCallbackProxyGen::GetDefaultObj()
{
	static class ULobbyMessageCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<ULobbyMessageCallbackProxyGen*>(ULobbyMessageCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.LobbyMessageCallbackProxyGen.LobbyMessage
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqLobbyMessage            Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class ULobbyMessageCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULobbyMessageCallbackProxyGen* ULobbyMessageCallbackProxyGen::LobbyMessage(struct FReqLobbyMessage& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyMessageCallbackProxyGen", "LobbyMessage");

	Params::ULobbyMessageCallbackProxyGen_LobbyMessage_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.ModifyDropshipCallbackProxyGen
// (None)

class UClass* UModifyDropshipCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModifyDropshipCallbackProxyGen");

	return Clss;
}


// ModifyDropshipCallbackProxyGen OnlineSubsystemIcarus.Default__ModifyDropshipCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UModifyDropshipCallbackProxyGen* UModifyDropshipCallbackProxyGen::GetDefaultObj()
{
	static class UModifyDropshipCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UModifyDropshipCallbackProxyGen*>(UModifyDropshipCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.ModifyDropshipCallbackProxyGen.ModifyDropship
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqModifyDropship          Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UModifyDropshipCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UModifyDropshipCallbackProxyGen* UModifyDropshipCallbackProxyGen::ModifyDropship(struct FReqModifyDropship& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModifyDropshipCallbackProxyGen", "ModifyDropship");

	Params::UModifyDropshipCallbackProxyGen_ModifyDropship_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.MoveMetaInventoryItemCallbackProxyGen
// (None)

class UClass* UMoveMetaInventoryItemCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoveMetaInventoryItemCallbackProxyGen");

	return Clss;
}


// MoveMetaInventoryItemCallbackProxyGen OnlineSubsystemIcarus.Default__MoveMetaInventoryItemCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UMoveMetaInventoryItemCallbackProxyGen* UMoveMetaInventoryItemCallbackProxyGen::GetDefaultObj()
{
	static class UMoveMetaInventoryItemCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoveMetaInventoryItemCallbackProxyGen*>(UMoveMetaInventoryItemCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.MoveMetaInventoryItemCallbackProxyGen.MoveMetaInventoryItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqMoveMetaInventoryItem   Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UMoveMetaInventoryItemCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoveMetaInventoryItemCallbackProxyGen* UMoveMetaInventoryItemCallbackProxyGen::MoveMetaInventoryItem(struct FReqMoveMetaInventoryItem& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoveMetaInventoryItemCallbackProxyGen", "MoveMetaInventoryItem");

	Params::UMoveMetaInventoryItemCallbackProxyGen_MoveMetaInventoryItem_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary
// (None)

class UClass* UOnlineSubsystemIcarusFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineSubsystemIcarusFunctionLibrary");

	return Clss;
}


// OnlineSubsystemIcarusFunctionLibrary OnlineSubsystemIcarus.Default__OnlineSubsystemIcarusFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineSubsystemIcarusFunctionLibrary* UOnlineSubsystemIcarusFunctionLibrary::GetDefaultObj()
{
	static class UOnlineSubsystemIcarusFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineSubsystemIcarusFunctionLibrary*>(UOnlineSubsystemIcarusFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.SetPresence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EOnlinePresenceStatusIcarusNewState                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPresencePropertyKeyPair>Properties                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UOnlineSubsystemIcarusFunctionLibrary::SetPresence(class APlayerController* PlayerController, enum class EOnlinePresenceStatusIcarus NewState, TArray<struct FPresencePropertyKeyPair>& Properties)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemIcarusFunctionLibrary", "SetPresence");

	Params::UOnlineSubsystemIcarusFunctionLibrary_SetPresence_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.NewState = NewState;
	Parms.Properties = Properties;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.MakeLiteralPresencePropertyString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPresencePropertyKeyPair    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FPresencePropertyKeyPair UOnlineSubsystemIcarusFunctionLibrary::MakeLiteralPresencePropertyString(class FName Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemIcarusFunctionLibrary", "MakeLiteralPresencePropertyString");

	Params::UOnlineSubsystemIcarusFunctionLibrary_MakeLiteralPresencePropertyString_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.IsOnlineSubsystemIcarusEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineSubsystemIcarusFunctionLibrary::IsOnlineSubsystemIcarusEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemIcarusFunctionLibrary", "IsOnlineSubsystemIcarusEnabled");

	Params::UOnlineSubsystemIcarusFunctionLibrary_IsOnlineSubsystemIcarusEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.GetIcarusVersion
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FIcarusVersion              Version                                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineSubsystemIcarusFunctionLibrary::GetIcarusVersion(struct FIcarusVersion* Version)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemIcarusFunctionLibrary", "GetIcarusVersion");

	Params::UOnlineSubsystemIcarusFunctionLibrary_GetIcarusVersion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Version != nullptr)
		*Version = std::move(Parms.Version);

	return Parms.ReturnValue;

}


// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.GetIcarusMessageListeners
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UIcarusMessageListeners*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UIcarusMessageListeners* UOnlineSubsystemIcarusFunctionLibrary::GetIcarusMessageListeners()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemIcarusFunctionLibrary", "GetIcarusMessageListeners");

	Params::UOnlineSubsystemIcarusFunctionLibrary_GetIcarusMessageListeners_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.GetIcarusLobbyConnectionComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UIcarusLobbyConnectionComponent*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UIcarusLobbyConnectionComponent* UOnlineSubsystemIcarusFunctionLibrary::GetIcarusLobbyConnectionComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemIcarusFunctionLibrary", "GetIcarusLobbyConnectionComponent");

	Params::UOnlineSubsystemIcarusFunctionLibrary_GetIcarusLobbyConnectionComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.GetIcarusConnectionComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UIcarusConnectionComponent*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UIcarusConnectionComponent* UOnlineSubsystemIcarusFunctionLibrary::GetIcarusConnectionComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemIcarusFunctionLibrary", "GetIcarusConnectionComponent");

	Params::UOnlineSubsystemIcarusFunctionLibrary_GetIcarusConnectionComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.GetHash
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      Buffer                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineSubsystemIcarusFunctionLibrary::GetHash(TArray<uint8>& Buffer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemIcarusFunctionLibrary", "GetHash");

	Params::UOnlineSubsystemIcarusFunctionLibrary_GetHash_Params Parms{};

	Parms.Buffer = Buffer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.GetGatewayAddress
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineSubsystemIcarusFunctionLibrary::GetGatewayAddress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemIcarusFunctionLibrary", "GetGatewayAddress");

	Params::UOnlineSubsystemIcarusFunctionLibrary_GetGatewayAddress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.OnlineSubsystemIcarusOfflineFunctionLibrary
// (None)

class UClass* UOnlineSubsystemIcarusOfflineFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineSubsystemIcarusOfflineFunctionLibrary");

	return Clss;
}


// OnlineSubsystemIcarusOfflineFunctionLibrary OnlineSubsystemIcarus.Default__OnlineSubsystemIcarusOfflineFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineSubsystemIcarusOfflineFunctionLibrary* UOnlineSubsystemIcarusOfflineFunctionLibrary::GetDefaultObj()
{
	static class UOnlineSubsystemIcarusOfflineFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineSubsystemIcarusOfflineFunctionLibrary*>(UOnlineSubsystemIcarusOfflineFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusOfflineFunctionLibrary.SwitchOnlineMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bOnlineMode                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineSubsystemIcarusOfflineFunctionLibrary::SwitchOnlineMode(bool bOnlineMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemIcarusOfflineFunctionLibrary", "SwitchOnlineMode");

	Params::UOnlineSubsystemIcarusOfflineFunctionLibrary_SwitchOnlineMode_Params Parms{};

	Parms.bOnlineMode = bOnlineMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusOfflineFunctionLibrary.IsOnlineMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineSubsystemIcarusOfflineFunctionLibrary::IsOnlineMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemIcarusOfflineFunctionLibrary", "IsOnlineMode");

	Params::UOnlineSubsystemIcarusOfflineFunctionLibrary_IsOnlineMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary
// (None)

class UClass* UOnlineSubsystemIcarusSessionFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineSubsystemIcarusSessionFunctionLibrary");

	return Clss;
}


// OnlineSubsystemIcarusSessionFunctionLibrary OnlineSubsystemIcarus.Default__OnlineSubsystemIcarusSessionFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineSubsystemIcarusSessionFunctionLibrary* UOnlineSubsystemIcarusSessionFunctionLibrary::GetDefaultObj()
{
	static class UOnlineSubsystemIcarusSessionFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineSubsystemIcarusSessionFunctionLibrary*>(UOnlineSubsystemIcarusSessionFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.SendChatMessage
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FIcarusChatMessage          ChatMessage                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UOnlineSubsystemIcarusSessionFunctionLibrary::SendChatMessage(struct FIcarusChatMessage& ChatMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemIcarusSessionFunctionLibrary", "SendChatMessage");

	Params::UOnlineSubsystemIcarusSessionFunctionLibrary_SendChatMessage_Params Parms{};

	Parms.ChatMessage = ChatMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.ReqUpdateLobbyStatus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ELobbyStatus            LobbyStatus                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineSubsystemIcarusSessionFunctionLibrary::ReqUpdateLobbyStatus(enum class ELobbyStatus LobbyStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemIcarusSessionFunctionLibrary", "ReqUpdateLobbyStatus");

	Params::UOnlineSubsystemIcarusSessionFunctionLibrary_ReqUpdateLobbyStatus_Params Parms{};

	Parms.LobbyStatus = LobbyStatus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.RequestConnectionString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UOnlineSubsystemIcarusSessionFunctionLibrary::RequestConnectionString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemIcarusSessionFunctionLibrary", "RequestConnectionString");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.IsValidMatch
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineSubsystemIcarusSessionFunctionLibrary::IsValidMatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemIcarusSessionFunctionLibrary", "IsValidMatch");

	Params::UOnlineSubsystemIcarusSessionFunctionLibrary_IsValidMatch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.IsMatchHost
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineSubsystemIcarusSessionFunctionLibrary::IsMatchHost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemIcarusSessionFunctionLibrary", "IsMatchHost");

	Params::UOnlineSubsystemIcarusSessionFunctionLibrary_IsMatchHost_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.IsConnectedIcarusBackend
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineSubsystemIcarusSessionFunctionLibrary::IsConnectedIcarusBackend()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemIcarusSessionFunctionLibrary", "IsConnectedIcarusBackend");

	Params::UOnlineSubsystemIcarusSessionFunctionLibrary_IsConnectedIcarusBackend_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.GetMatchFilters
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<class FName, struct FMatchMakingFilter>ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FName, struct FMatchMakingFilter> UOnlineSubsystemIcarusSessionFunctionLibrary::GetMatchFilters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemIcarusSessionFunctionLibrary", "GetMatchFilters");

	Params::UOnlineSubsystemIcarusSessionFunctionLibrary_GetMatchFilters_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.GetIcarusPlayerId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineSubsystemIcarusSessionFunctionLibrary::GetIcarusPlayerId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemIcarusSessionFunctionLibrary", "GetIcarusPlayerId");

	Params::UOnlineSubsystemIcarusSessionFunctionLibrary_GetIcarusPlayerId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.GetCurrentMatch
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMatchUpdate                ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FMatchUpdate UOnlineSubsystemIcarusSessionFunctionLibrary::GetCurrentMatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemIcarusSessionFunctionLibrary", "GetCurrentMatch");

	Params::UOnlineSubsystemIcarusSessionFunctionLibrary_GetCurrentMatch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.GetConnectionString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FConnectionString           ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FConnectionString UOnlineSubsystemIcarusSessionFunctionLibrary::GetConnectionString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemIcarusSessionFunctionLibrary", "GetConnectionString");

	Params::UOnlineSubsystemIcarusSessionFunctionLibrary_GetConnectionString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.GetAuthToken
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineSubsystemIcarusSessionFunctionLibrary::GetAuthToken(int32 LocalUserNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemIcarusSessionFunctionLibrary", "GetAuthToken");

	Params::UOnlineSubsystemIcarusSessionFunctionLibrary_GetAuthToken_Params Parms{};

	Parms.LocalUserNum = LocalUserNum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.CancelMatchMaking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOnlineSubsystemIcarusSessionFunctionLibrary::CancelMatchMaking(class FName SessionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemIcarusSessionFunctionLibrary", "CancelMatchMaking");

	Params::UOnlineSubsystemIcarusSessionFunctionLibrary_CancelMatchMaking_Params Parms{};

	Parms.SessionName = SessionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemIcarus.PackageLoadoutCallbackProxyGen
// (None)

class UClass* UPackageLoadoutCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PackageLoadoutCallbackProxyGen");

	return Clss;
}


// PackageLoadoutCallbackProxyGen OnlineSubsystemIcarus.Default__PackageLoadoutCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UPackageLoadoutCallbackProxyGen* UPackageLoadoutCallbackProxyGen::GetDefaultObj()
{
	static class UPackageLoadoutCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UPackageLoadoutCallbackProxyGen*>(UPackageLoadoutCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.PackageLoadoutCallbackProxyGen.PackageLoadout
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqPackageLoadout          Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UPackageLoadoutCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPackageLoadoutCallbackProxyGen* UPackageLoadoutCallbackProxyGen::PackageLoadout(struct FReqPackageLoadout& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PackageLoadoutCallbackProxyGen", "PackageLoadout");

	Params::UPackageLoadoutCallbackProxyGen_PackageLoadout_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.ProspectExpiredCallbackProxyGen
// (None)

class UClass* UProspectExpiredCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProspectExpiredCallbackProxyGen");

	return Clss;
}


// ProspectExpiredCallbackProxyGen OnlineSubsystemIcarus.Default__ProspectExpiredCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UProspectExpiredCallbackProxyGen* UProspectExpiredCallbackProxyGen::GetDefaultObj()
{
	static class UProspectExpiredCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UProspectExpiredCallbackProxyGen*>(UProspectExpiredCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.ProspectExpiredCallbackProxyGen.ProspectExpired
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqProspectExpired         Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UProspectExpiredCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UProspectExpiredCallbackProxyGen* UProspectExpiredCallbackProxyGen::ProspectExpired(struct FReqProspectExpired& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProspectExpiredCallbackProxyGen", "ProspectExpired");

	Params::UProspectExpiredCallbackProxyGen_ProspectExpired_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.ReadNotificationCallbackProxyGen
// (None)

class UClass* UReadNotificationCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReadNotificationCallbackProxyGen");

	return Clss;
}


// ReadNotificationCallbackProxyGen OnlineSubsystemIcarus.Default__ReadNotificationCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UReadNotificationCallbackProxyGen* UReadNotificationCallbackProxyGen::GetDefaultObj()
{
	static class UReadNotificationCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UReadNotificationCallbackProxyGen*>(UReadNotificationCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.ReadNotificationCallbackProxyGen.ReadNotification
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqReadNotification        Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UReadNotificationCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UReadNotificationCallbackProxyGen* UReadNotificationCallbackProxyGen::ReadNotification(struct FReqReadNotification& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReadNotificationCallbackProxyGen", "ReadNotification");

	Params::UReadNotificationCallbackProxyGen_ReadNotification_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.RemoveEnvirosuitCallbackProxyGen
// (None)

class UClass* URemoveEnvirosuitCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RemoveEnvirosuitCallbackProxyGen");

	return Clss;
}


// RemoveEnvirosuitCallbackProxyGen OnlineSubsystemIcarus.Default__RemoveEnvirosuitCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class URemoveEnvirosuitCallbackProxyGen* URemoveEnvirosuitCallbackProxyGen::GetDefaultObj()
{
	static class URemoveEnvirosuitCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<URemoveEnvirosuitCallbackProxyGen*>(URemoveEnvirosuitCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.RemoveEnvirosuitCallbackProxyGen.RemoveEnvirosuit
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqRemoveEnvirosuit        Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class URemoveEnvirosuitCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URemoveEnvirosuitCallbackProxyGen* URemoveEnvirosuitCallbackProxyGen::RemoveEnvirosuit(struct FReqRemoveEnvirosuit& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RemoveEnvirosuitCallbackProxyGen", "RemoveEnvirosuit");

	Params::URemoveEnvirosuitCallbackProxyGen_RemoveEnvirosuit_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.RemoveMetaItemCallbackProxyGen
// (None)

class UClass* URemoveMetaItemCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RemoveMetaItemCallbackProxyGen");

	return Clss;
}


// RemoveMetaItemCallbackProxyGen OnlineSubsystemIcarus.Default__RemoveMetaItemCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class URemoveMetaItemCallbackProxyGen* URemoveMetaItemCallbackProxyGen::GetDefaultObj()
{
	static class URemoveMetaItemCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<URemoveMetaItemCallbackProxyGen*>(URemoveMetaItemCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.RemoveMetaItemCallbackProxyGen.RemoveMetaItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqRemoveMetaInventoryItem Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class URemoveMetaItemCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URemoveMetaItemCallbackProxyGen* URemoveMetaItemCallbackProxyGen::RemoveMetaItem(struct FReqRemoveMetaInventoryItem& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RemoveMetaItemCallbackProxyGen", "RemoveMetaItem");

	Params::URemoveMetaItemCallbackProxyGen_RemoveMetaItem_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.RemoveSelectedDropshipCallbackProxyGen
// (None)

class UClass* URemoveSelectedDropshipCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RemoveSelectedDropshipCallbackProxyGen");

	return Clss;
}


// RemoveSelectedDropshipCallbackProxyGen OnlineSubsystemIcarus.Default__RemoveSelectedDropshipCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class URemoveSelectedDropshipCallbackProxyGen* URemoveSelectedDropshipCallbackProxyGen::GetDefaultObj()
{
	static class URemoveSelectedDropshipCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<URemoveSelectedDropshipCallbackProxyGen*>(URemoveSelectedDropshipCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.RemoveSelectedDropshipCallbackProxyGen.RemoveSelectedDropship
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqRemoveSelectedDropship  Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class URemoveSelectedDropshipCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URemoveSelectedDropshipCallbackProxyGen* URemoveSelectedDropshipCallbackProxyGen::RemoveSelectedDropship(struct FReqRemoveSelectedDropship& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RemoveSelectedDropshipCallbackProxyGen", "RemoveSelectedDropship");

	Params::URemoveSelectedDropshipCallbackProxyGen_RemoveSelectedDropship_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.RepairWorkshopItemCallbackProxyGen
// (None)

class UClass* URepairWorkshopItemCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RepairWorkshopItemCallbackProxyGen");

	return Clss;
}


// RepairWorkshopItemCallbackProxyGen OnlineSubsystemIcarus.Default__RepairWorkshopItemCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class URepairWorkshopItemCallbackProxyGen* URepairWorkshopItemCallbackProxyGen::GetDefaultObj()
{
	static class URepairWorkshopItemCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<URepairWorkshopItemCallbackProxyGen*>(URepairWorkshopItemCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.RepairWorkshopItemCallbackProxyGen.RepairWorkshopItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqRepairWorkshopItem      Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class URepairWorkshopItemCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URepairWorkshopItemCallbackProxyGen* URepairWorkshopItemCallbackProxyGen::RepairWorkshopItem(struct FReqRepairWorkshopItem& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RepairWorkshopItemCallbackProxyGen", "RepairWorkshopItem");

	Params::URepairWorkshopItemCallbackProxyGen_RepairWorkshopItem_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.ReplicateWorkshopItemCallbackProxyGen
// (None)

class UClass* UReplicateWorkshopItemCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplicateWorkshopItemCallbackProxyGen");

	return Clss;
}


// ReplicateWorkshopItemCallbackProxyGen OnlineSubsystemIcarus.Default__ReplicateWorkshopItemCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UReplicateWorkshopItemCallbackProxyGen* UReplicateWorkshopItemCallbackProxyGen::GetDefaultObj()
{
	static class UReplicateWorkshopItemCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UReplicateWorkshopItemCallbackProxyGen*>(UReplicateWorkshopItemCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.ReplicateWorkshopItemCallbackProxyGen.ReplicateWorkshopItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqReplicateWorkshopItem   Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UReplicateWorkshopItemCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UReplicateWorkshopItemCallbackProxyGen* UReplicateWorkshopItemCallbackProxyGen::ReplicateWorkshopItem(struct FReqReplicateWorkshopItem& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicateWorkshopItemCallbackProxyGen", "ReplicateWorkshopItem");

	Params::UReplicateWorkshopItemCallbackProxyGen_ReplicateWorkshopItem_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.ResetCharacterCallbackProxyGen
// (None)

class UClass* UResetCharacterCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResetCharacterCallbackProxyGen");

	return Clss;
}


// ResetCharacterCallbackProxyGen OnlineSubsystemIcarus.Default__ResetCharacterCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UResetCharacterCallbackProxyGen* UResetCharacterCallbackProxyGen::GetDefaultObj()
{
	static class UResetCharacterCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UResetCharacterCallbackProxyGen*>(UResetCharacterCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.ResetCharacterCallbackProxyGen.ResetCharacter
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqResetCharacter          Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UResetCharacterCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UResetCharacterCallbackProxyGen* UResetCharacterCallbackProxyGen::ResetCharacter(struct FReqResetCharacter& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResetCharacterCallbackProxyGen", "ResetCharacter");

	Params::UResetCharacterCallbackProxyGen_ResetCharacter_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.ResetCharacterProspectStateCallbackProxyGen
// (None)

class UClass* UResetCharacterProspectStateCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResetCharacterProspectStateCallbackProxyGen");

	return Clss;
}


// ResetCharacterProspectStateCallbackProxyGen OnlineSubsystemIcarus.Default__ResetCharacterProspectStateCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UResetCharacterProspectStateCallbackProxyGen* UResetCharacterProspectStateCallbackProxyGen::GetDefaultObj()
{
	static class UResetCharacterProspectStateCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UResetCharacterProspectStateCallbackProxyGen*>(UResetCharacterProspectStateCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.ResetCharacterProspectStateCallbackProxyGen.ResetCharacterProspectState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqResetCharacterProspectStateRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UResetCharacterProspectStateCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UResetCharacterProspectStateCallbackProxyGen* UResetCharacterProspectStateCallbackProxyGen::ResetCharacterProspectState(struct FReqResetCharacterProspectState& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResetCharacterProspectStateCallbackProxyGen", "ResetCharacterProspectState");

	Params::UResetCharacterProspectStateCallbackProxyGen_ResetCharacterProspectState_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.ResumeProspectCallbackProxyGen
// (None)

class UClass* UResumeProspectCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResumeProspectCallbackProxyGen");

	return Clss;
}


// ResumeProspectCallbackProxyGen OnlineSubsystemIcarus.Default__ResumeProspectCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UResumeProspectCallbackProxyGen* UResumeProspectCallbackProxyGen::GetDefaultObj()
{
	static class UResumeProspectCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UResumeProspectCallbackProxyGen*>(UResumeProspectCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.ResumeProspectCallbackProxyGen.ResumeProspect
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqResumeProspect          Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UResumeProspectCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UResumeProspectCallbackProxyGen* UResumeProspectCallbackProxyGen::ResumeProspect(struct FReqResumeProspect& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResumeProspectCallbackProxyGen", "ResumeProspect");

	Params::UResumeProspectCallbackProxyGen_ResumeProspect_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.SelectDropshipCallbackProxyGen
// (None)

class UClass* USelectDropshipCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SelectDropshipCallbackProxyGen");

	return Clss;
}


// SelectDropshipCallbackProxyGen OnlineSubsystemIcarus.Default__SelectDropshipCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class USelectDropshipCallbackProxyGen* USelectDropshipCallbackProxyGen::GetDefaultObj()
{
	static class USelectDropshipCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<USelectDropshipCallbackProxyGen*>(USelectDropshipCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.SelectDropshipCallbackProxyGen.SelectDropship
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqSelectDropship          Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class USelectDropshipCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USelectDropshipCallbackProxyGen* USelectDropshipCallbackProxyGen::SelectDropship(struct FReqSelectDropship& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SelectDropshipCallbackProxyGen", "SelectDropship");

	Params::USelectDropshipCallbackProxyGen_SelectDropship_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.SelectEnvirosuitCallbackProxyGen
// (None)

class UClass* USelectEnvirosuitCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SelectEnvirosuitCallbackProxyGen");

	return Clss;
}


// SelectEnvirosuitCallbackProxyGen OnlineSubsystemIcarus.Default__SelectEnvirosuitCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class USelectEnvirosuitCallbackProxyGen* USelectEnvirosuitCallbackProxyGen::GetDefaultObj()
{
	static class USelectEnvirosuitCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<USelectEnvirosuitCallbackProxyGen*>(USelectEnvirosuitCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.SelectEnvirosuitCallbackProxyGen.SelectEnvirosuit
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqSelectEnvirosuit        Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class USelectEnvirosuitCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USelectEnvirosuitCallbackProxyGen* USelectEnvirosuitCallbackProxyGen::SelectEnvirosuit(struct FReqSelectEnvirosuit& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SelectEnvirosuitCallbackProxyGen", "SelectEnvirosuit");

	Params::USelectEnvirosuitCallbackProxyGen_SelectEnvirosuit_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.SetResourceSplitCallbackProxyGen
// (None)

class UClass* USetResourceSplitCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SetResourceSplitCallbackProxyGen");

	return Clss;
}


// SetResourceSplitCallbackProxyGen OnlineSubsystemIcarus.Default__SetResourceSplitCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class USetResourceSplitCallbackProxyGen* USetResourceSplitCallbackProxyGen::GetDefaultObj()
{
	static class USetResourceSplitCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<USetResourceSplitCallbackProxyGen*>(USetResourceSplitCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.SetResourceSplitCallbackProxyGen.SetResourceSplit
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqSetResourceSplit        Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class USetResourceSplitCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USetResourceSplitCallbackProxyGen* USetResourceSplitCallbackProxyGen::SetResourceSplit(struct FReqSetResourceSplit& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SetResourceSplitCallbackProxyGen", "SetResourceSplit");

	Params::USetResourceSplitCallbackProxyGen_SetResourceSplit_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.SettleProspectCallbackProxyGen
// (None)

class UClass* USettleProspectCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SettleProspectCallbackProxyGen");

	return Clss;
}


// SettleProspectCallbackProxyGen OnlineSubsystemIcarus.Default__SettleProspectCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class USettleProspectCallbackProxyGen* USettleProspectCallbackProxyGen::GetDefaultObj()
{
	static class USettleProspectCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<USettleProspectCallbackProxyGen*>(USettleProspectCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.SettleProspectCallbackProxyGen.SettleProspect
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqSettleProspect          Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class USettleProspectCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USettleProspectCallbackProxyGen* USettleProspectCallbackProxyGen::SettleProspect(struct FReqSettleProspect& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettleProspectCallbackProxyGen", "SettleProspect");

	Params::USettleProspectCallbackProxyGen_SettleProspect_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.SyncAccountFlagsCallbackProxyGen
// (None)

class UClass* USyncAccountFlagsCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SyncAccountFlagsCallbackProxyGen");

	return Clss;
}


// SyncAccountFlagsCallbackProxyGen OnlineSubsystemIcarus.Default__SyncAccountFlagsCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class USyncAccountFlagsCallbackProxyGen* USyncAccountFlagsCallbackProxyGen::GetDefaultObj()
{
	static class USyncAccountFlagsCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<USyncAccountFlagsCallbackProxyGen*>(USyncAccountFlagsCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.SyncAccountFlagsCallbackProxyGen.SyncAccountFlags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqSyncAccountFlags        Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class USyncAccountFlagsCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USyncAccountFlagsCallbackProxyGen* USyncAccountFlagsCallbackProxyGen::SyncAccountFlags(struct FReqSyncAccountFlags& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SyncAccountFlagsCallbackProxyGen", "SyncAccountFlags");

	Params::USyncAccountFlagsCallbackProxyGen_SyncAccountFlags_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.SyncAccountTalentsCallbackProxyGen
// (None)

class UClass* USyncAccountTalentsCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SyncAccountTalentsCallbackProxyGen");

	return Clss;
}


// SyncAccountTalentsCallbackProxyGen OnlineSubsystemIcarus.Default__SyncAccountTalentsCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class USyncAccountTalentsCallbackProxyGen* USyncAccountTalentsCallbackProxyGen::GetDefaultObj()
{
	static class USyncAccountTalentsCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<USyncAccountTalentsCallbackProxyGen*>(USyncAccountTalentsCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.SyncAccountTalentsCallbackProxyGen.SyncAccountTalents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqSyncAccountTalents      Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class USyncAccountTalentsCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USyncAccountTalentsCallbackProxyGen* USyncAccountTalentsCallbackProxyGen::SyncAccountTalents(struct FReqSyncAccountTalents& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SyncAccountTalentsCallbackProxyGen", "SyncAccountTalents");

	Params::USyncAccountTalentsCallbackProxyGen_SyncAccountTalents_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.SyncCharacterTalentsCallbackProxyGen
// (None)

class UClass* USyncCharacterTalentsCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SyncCharacterTalentsCallbackProxyGen");

	return Clss;
}


// SyncCharacterTalentsCallbackProxyGen OnlineSubsystemIcarus.Default__SyncCharacterTalentsCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class USyncCharacterTalentsCallbackProxyGen* USyncCharacterTalentsCallbackProxyGen::GetDefaultObj()
{
	static class USyncCharacterTalentsCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<USyncCharacterTalentsCallbackProxyGen*>(USyncCharacterTalentsCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.SyncCharacterTalentsCallbackProxyGen.SyncCharacterTalents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqSyncCharacterTalents    Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class USyncCharacterTalentsCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USyncCharacterTalentsCallbackProxyGen* USyncCharacterTalentsCallbackProxyGen::SyncCharacterTalents(struct FReqSyncCharacterTalents& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SyncCharacterTalentsCallbackProxyGen", "SyncCharacterTalents");

	Params::USyncCharacterTalentsCallbackProxyGen_SyncCharacterTalents_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.TalentRefundCallbackProxyGen
// (None)

class UClass* UTalentRefundCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TalentRefundCallbackProxyGen");

	return Clss;
}


// TalentRefundCallbackProxyGen OnlineSubsystemIcarus.Default__TalentRefundCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UTalentRefundCallbackProxyGen* UTalentRefundCallbackProxyGen::GetDefaultObj()
{
	static class UTalentRefundCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UTalentRefundCallbackProxyGen*>(UTalentRefundCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.TalentRefundCallbackProxyGen.TalentRefund
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqTalentRefund            Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UTalentRefundCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTalentRefundCallbackProxyGen* UTalentRefundCallbackProxyGen::TalentRefund(struct FReqTalentRefund& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TalentRefundCallbackProxyGen", "TalentRefund");

	Params::UTalentRefundCallbackProxyGen_TalentRefund_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.UnlockAccountFlagsCallbackProxyGen
// (None)

class UClass* UUnlockAccountFlagsCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UnlockAccountFlagsCallbackProxyGen");

	return Clss;
}


// UnlockAccountFlagsCallbackProxyGen OnlineSubsystemIcarus.Default__UnlockAccountFlagsCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UUnlockAccountFlagsCallbackProxyGen* UUnlockAccountFlagsCallbackProxyGen::GetDefaultObj()
{
	static class UUnlockAccountFlagsCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UUnlockAccountFlagsCallbackProxyGen*>(UUnlockAccountFlagsCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.UnlockAccountFlagsCallbackProxyGen.UnlockAccountFlags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqUnlockAccountFlags      Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UUnlockAccountFlagsCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUnlockAccountFlagsCallbackProxyGen* UUnlockAccountFlagsCallbackProxyGen::UnlockAccountFlags(struct FReqUnlockAccountFlags& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockAccountFlagsCallbackProxyGen", "UnlockAccountFlags");

	Params::UUnlockAccountFlagsCallbackProxyGen_UnlockAccountFlags_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.UnlockCharacterFlagsCallbackProxyGen
// (None)

class UClass* UUnlockCharacterFlagsCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UnlockCharacterFlagsCallbackProxyGen");

	return Clss;
}


// UnlockCharacterFlagsCallbackProxyGen OnlineSubsystemIcarus.Default__UnlockCharacterFlagsCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UUnlockCharacterFlagsCallbackProxyGen* UUnlockCharacterFlagsCallbackProxyGen::GetDefaultObj()
{
	static class UUnlockCharacterFlagsCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UUnlockCharacterFlagsCallbackProxyGen*>(UUnlockCharacterFlagsCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.UnlockCharacterFlagsCallbackProxyGen.UnlockCharacterFlags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqUnlockCharacterFlags    Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UUnlockCharacterFlagsCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUnlockCharacterFlagsCallbackProxyGen* UUnlockCharacterFlagsCallbackProxyGen::UnlockCharacterFlags(struct FReqUnlockCharacterFlags& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockCharacterFlagsCallbackProxyGen", "UnlockCharacterFlags");

	Params::UUnlockCharacterFlagsCallbackProxyGen_UnlockCharacterFlags_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.UnlockWorkshopItemCallbackProxyGen
// (None)

class UClass* UUnlockWorkshopItemCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UnlockWorkshopItemCallbackProxyGen");

	return Clss;
}


// UnlockWorkshopItemCallbackProxyGen OnlineSubsystemIcarus.Default__UnlockWorkshopItemCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UUnlockWorkshopItemCallbackProxyGen* UUnlockWorkshopItemCallbackProxyGen::GetDefaultObj()
{
	static class UUnlockWorkshopItemCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UUnlockWorkshopItemCallbackProxyGen*>(UUnlockWorkshopItemCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.UnlockWorkshopItemCallbackProxyGen.UnlockWorkshopItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqUnlockWorkshopItem      Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UUnlockWorkshopItemCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUnlockWorkshopItemCallbackProxyGen* UUnlockWorkshopItemCallbackProxyGen::UnlockWorkshopItem(struct FReqUnlockWorkshopItem& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockWorkshopItemCallbackProxyGen", "UnlockWorkshopItem");

	Params::UUnlockWorkshopItemCallbackProxyGen_UnlockWorkshopItem_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.UnpackageLoadoutCallbackProxyGen
// (None)

class UClass* UUnpackageLoadoutCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UnpackageLoadoutCallbackProxyGen");

	return Clss;
}


// UnpackageLoadoutCallbackProxyGen OnlineSubsystemIcarus.Default__UnpackageLoadoutCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UUnpackageLoadoutCallbackProxyGen* UUnpackageLoadoutCallbackProxyGen::GetDefaultObj()
{
	static class UUnpackageLoadoutCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UUnpackageLoadoutCallbackProxyGen*>(UUnpackageLoadoutCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.UnpackageLoadoutCallbackProxyGen.UnpackageLoadout
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqUnpackageLoadout        Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UUnpackageLoadoutCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUnpackageLoadoutCallbackProxyGen* UUnpackageLoadoutCallbackProxyGen::UnpackageLoadout(struct FReqUnpackageLoadout& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnpackageLoadoutCallbackProxyGen", "UnpackageLoadout");

	Params::UUnpackageLoadoutCallbackProxyGen_UnpackageLoadout_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.UpdateChallengeProgressCallbackProxyGen
// (None)

class UClass* UUpdateChallengeProgressCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UpdateChallengeProgressCallbackProxyGen");

	return Clss;
}


// UpdateChallengeProgressCallbackProxyGen OnlineSubsystemIcarus.Default__UpdateChallengeProgressCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UUpdateChallengeProgressCallbackProxyGen* UUpdateChallengeProgressCallbackProxyGen::GetDefaultObj()
{
	static class UUpdateChallengeProgressCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UUpdateChallengeProgressCallbackProxyGen*>(UUpdateChallengeProgressCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.UpdateChallengeProgressCallbackProxyGen.UpdateChallengeProgress
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqUpdateChallengeProgress Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UUpdateChallengeProgressCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUpdateChallengeProgressCallbackProxyGen* UUpdateChallengeProgressCallbackProxyGen::UpdateChallengeProgress(struct FReqUpdateChallengeProgress& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdateChallengeProgressCallbackProxyGen", "UpdateChallengeProgress");

	Params::UUpdateChallengeProgressCallbackProxyGen_UpdateChallengeProgress_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.UpdateCharacterLoadoutCallbackProxyGen
// (None)

class UClass* UUpdateCharacterLoadoutCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UpdateCharacterLoadoutCallbackProxyGen");

	return Clss;
}


// UpdateCharacterLoadoutCallbackProxyGen OnlineSubsystemIcarus.Default__UpdateCharacterLoadoutCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UUpdateCharacterLoadoutCallbackProxyGen* UUpdateCharacterLoadoutCallbackProxyGen::GetDefaultObj()
{
	static class UUpdateCharacterLoadoutCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UUpdateCharacterLoadoutCallbackProxyGen*>(UUpdateCharacterLoadoutCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.UpdateCharacterLoadoutCallbackProxyGen.UpdateCharacterLoadout
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqUpdateCharacterLoadout  Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UUpdateCharacterLoadoutCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUpdateCharacterLoadoutCallbackProxyGen* UUpdateCharacterLoadoutCallbackProxyGen::UpdateCharacterLoadout(struct FReqUpdateCharacterLoadout& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdateCharacterLoadoutCallbackProxyGen", "UpdateCharacterLoadout");

	Params::UUpdateCharacterLoadoutCallbackProxyGen_UpdateCharacterLoadout_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.UpdateCharacterProgressCallbackProxyGen
// (None)

class UClass* UUpdateCharacterProgressCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UpdateCharacterProgressCallbackProxyGen");

	return Clss;
}


// UpdateCharacterProgressCallbackProxyGen OnlineSubsystemIcarus.Default__UpdateCharacterProgressCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UUpdateCharacterProgressCallbackProxyGen* UUpdateCharacterProgressCallbackProxyGen::GetDefaultObj()
{
	static class UUpdateCharacterProgressCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UUpdateCharacterProgressCallbackProxyGen*>(UUpdateCharacterProgressCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.UpdateCharacterProgressCallbackProxyGen.UpdateCharacterProgress
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqUpdateCharacterProgress Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UUpdateCharacterProgressCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUpdateCharacterProgressCallbackProxyGen* UUpdateCharacterProgressCallbackProxyGen::UpdateCharacterProgress(struct FReqUpdateCharacterProgress& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdateCharacterProgressCallbackProxyGen", "UpdateCharacterProgress");

	Params::UUpdateCharacterProgressCallbackProxyGen_UpdateCharacterProgress_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.UpdateCharacterProspectLocationCallbackProxyGen
// (None)

class UClass* UUpdateCharacterProspectLocationCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UpdateCharacterProspectLocationCallbackProxyGen");

	return Clss;
}


// UpdateCharacterProspectLocationCallbackProxyGen OnlineSubsystemIcarus.Default__UpdateCharacterProspectLocationCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UUpdateCharacterProspectLocationCallbackProxyGen* UUpdateCharacterProspectLocationCallbackProxyGen::GetDefaultObj()
{
	static class UUpdateCharacterProspectLocationCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UUpdateCharacterProspectLocationCallbackProxyGen*>(UUpdateCharacterProspectLocationCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.UpdateCharacterProspectLocationCallbackProxyGen.UpdateCharacterProspectLocation
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqUpdateCharacterProspectLocationRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UUpdateCharacterProspectLocationCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUpdateCharacterProspectLocationCallbackProxyGen* UUpdateCharacterProspectLocationCallbackProxyGen::UpdateCharacterProspectLocation(struct FReqUpdateCharacterProspectLocation& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdateCharacterProspectLocationCallbackProxyGen", "UpdateCharacterProspectLocation");

	Params::UUpdateCharacterProspectLocationCallbackProxyGen_UpdateCharacterProspectLocation_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.UpdateCosmeticsCallbackProxyGen
// (None)

class UClass* UUpdateCosmeticsCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UpdateCosmeticsCallbackProxyGen");

	return Clss;
}


// UpdateCosmeticsCallbackProxyGen OnlineSubsystemIcarus.Default__UpdateCosmeticsCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UUpdateCosmeticsCallbackProxyGen* UUpdateCosmeticsCallbackProxyGen::GetDefaultObj()
{
	static class UUpdateCosmeticsCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UUpdateCosmeticsCallbackProxyGen*>(UUpdateCosmeticsCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.UpdateCosmeticsCallbackProxyGen.UpdateCosmetics
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqUpdateCosmetics         Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UUpdateCosmeticsCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUpdateCosmeticsCallbackProxyGen* UUpdateCosmeticsCallbackProxyGen::UpdateCosmetics(struct FReqUpdateCosmetics& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdateCosmeticsCallbackProxyGen", "UpdateCosmetics");

	Params::UUpdateCosmeticsCallbackProxyGen_UpdateCosmetics_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.UpdateFactionMissionProgressCallbackProxyGen
// (None)

class UClass* UUpdateFactionMissionProgressCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UpdateFactionMissionProgressCallbackProxyGen");

	return Clss;
}


// UpdateFactionMissionProgressCallbackProxyGen OnlineSubsystemIcarus.Default__UpdateFactionMissionProgressCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UUpdateFactionMissionProgressCallbackProxyGen* UUpdateFactionMissionProgressCallbackProxyGen::GetDefaultObj()
{
	static class UUpdateFactionMissionProgressCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UUpdateFactionMissionProgressCallbackProxyGen*>(UUpdateFactionMissionProgressCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.UpdateFactionMissionProgressCallbackProxyGen.UpdateFactionMissionProgress
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqUpdateFactionMissionProgressRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UUpdateFactionMissionProgressCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUpdateFactionMissionProgressCallbackProxyGen* UUpdateFactionMissionProgressCallbackProxyGen::UpdateFactionMissionProgress(struct FReqUpdateFactionMissionProgress& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdateFactionMissionProgressCallbackProxyGen", "UpdateFactionMissionProgress");

	Params::UUpdateFactionMissionProgressCallbackProxyGen_UpdateFactionMissionProgress_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.UpdateProspectCallbackProxyGen
// (None)

class UClass* UUpdateProspectCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UpdateProspectCallbackProxyGen");

	return Clss;
}


// UpdateProspectCallbackProxyGen OnlineSubsystemIcarus.Default__UpdateProspectCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UUpdateProspectCallbackProxyGen* UUpdateProspectCallbackProxyGen::GetDefaultObj()
{
	static class UUpdateProspectCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UUpdateProspectCallbackProxyGen*>(UUpdateProspectCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.UpdateProspectCallbackProxyGen.UpdateProspect
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqUpdateProspect          Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UUpdateProspectCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUpdateProspectCallbackProxyGen* UUpdateProspectCallbackProxyGen::UpdateProspect(struct FReqUpdateProspect& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdateProspectCallbackProxyGen", "UpdateProspect");

	Params::UUpdateProspectCallbackProxyGen_UpdateProspect_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemIcarus.UpdateTrackedStatsCallbackProxyGen
// (None)

class UClass* UUpdateTrackedStatsCallbackProxyGen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UpdateTrackedStatsCallbackProxyGen");

	return Clss;
}


// UpdateTrackedStatsCallbackProxyGen OnlineSubsystemIcarus.Default__UpdateTrackedStatsCallbackProxyGen
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UUpdateTrackedStatsCallbackProxyGen* UUpdateTrackedStatsCallbackProxyGen::GetDefaultObj()
{
	static class UUpdateTrackedStatsCallbackProxyGen* Default = nullptr;

	if (!Default)
		Default = static_cast<UUpdateTrackedStatsCallbackProxyGen*>(UUpdateTrackedStatsCallbackProxyGen::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemIcarus.UpdateTrackedStatsCallbackProxyGen.UpdateTrackedStats
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReqUpdateTrackedStats      Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UUpdateTrackedStatsCallbackProxyGen*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUpdateTrackedStatsCallbackProxyGen* UUpdateTrackedStatsCallbackProxyGen::UpdateTrackedStats(struct FReqUpdateTrackedStats& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdateTrackedStatsCallbackProxyGen", "UpdateTrackedStats");

	Params::UUpdateTrackedStatsCallbackProxyGen_UpdateTrackedStats_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


