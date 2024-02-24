#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Sentry.SentryAttachment
// (None)

class UClass* USentryAttachment::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryAttachment");

	return Clss;
}


// SentryAttachment Sentry.Default__SentryAttachment
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryAttachment* USentryAttachment::GetDefaultObj()
{
	static class USentryAttachment* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryAttachment*>(USentryAttachment::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryAttachment.InitializeWithPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ContentType                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryAttachment::InitializeWithPath(const class FString& Path, const class FString& Filename, const class FString& ContentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryAttachment", "InitializeWithPath");

	Params::USentryAttachment_InitializeWithPath_Params Parms{};

	Parms.Path = Path;
	Parms.Filename = Filename;
	Parms.ContentType = ContentType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryAttachment.InitializeWithData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Data                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ContentType                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryAttachment::InitializeWithData(TArray<uint8>& Data, const class FString& Filename, const class FString& ContentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryAttachment", "InitializeWithData");

	Params::USentryAttachment_InitializeWithData_Params Parms{};

	Parms.Data = Data;
	Parms.Filename = Filename;
	Parms.ContentType = ContentType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryAttachment.GetPath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryAttachment::GetPath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryAttachment", "GetPath");

	Params::USentryAttachment_GetPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryAttachment.GetFilename
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryAttachment::GetFilename()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryAttachment", "GetFilename");

	Params::USentryAttachment_GetFilename_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryAttachment.GetData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> USentryAttachment::GetData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryAttachment", "GetData");

	Params::USentryAttachment_GetData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryAttachment.GetContentType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryAttachment::GetContentType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryAttachment", "GetContentType");

	Params::USentryAttachment_GetContentType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Sentry.SentryBreadcrumb
// (None)

class UClass* USentryBreadcrumb::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryBreadcrumb");

	return Clss;
}


// SentryBreadcrumb Sentry.Default__SentryBreadcrumb
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryBreadcrumb* USentryBreadcrumb::GetDefaultObj()
{
	static class USentryBreadcrumb* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryBreadcrumb*>(USentryBreadcrumb::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryBreadcrumb.SetType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Type                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryBreadcrumb::SetType(const class FString& Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "SetType");

	Params::USentryBreadcrumb_SetType_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryBreadcrumb.SetMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryBreadcrumb::SetMessage(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "SetMessage");

	Params::USentryBreadcrumb_SetMessage_Params Parms{};

	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryBreadcrumb.SetLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESentryLevel            Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryBreadcrumb::SetLevel(enum class ESentryLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "SetLevel");

	Params::USentryBreadcrumb_SetLevel_Params Parms{};

	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryBreadcrumb.SetData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, class FString> Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USentryBreadcrumb::SetData(TMap<class FString, class FString>& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "SetData");

	Params::USentryBreadcrumb_SetData_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryBreadcrumb.SetCategory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Category                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryBreadcrumb::SetCategory(const class FString& Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "SetCategory");

	Params::USentryBreadcrumb_SetCategory_Params Parms{};

	Parms.Category = Category;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryBreadcrumb.GetType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryBreadcrumb::GetType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "GetType");

	Params::USentryBreadcrumb_GetType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryBreadcrumb.GetMessage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryBreadcrumb::GetMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "GetMessage");

	Params::USentryBreadcrumb_GetMessage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryBreadcrumb.GetLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESentryLevel            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESentryLevel USentryBreadcrumb::GetLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "GetLevel");

	Params::USentryBreadcrumb_GetLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryBreadcrumb.GetData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, class FString> USentryBreadcrumb::GetData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "GetData");

	Params::USentryBreadcrumb_GetData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryBreadcrumb.GetCategory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryBreadcrumb::GetCategory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "GetCategory");

	Params::USentryBreadcrumb_GetCategory_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Sentry.SentryEvent
// (None)

class UClass* USentryEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryEvent");

	return Clss;
}


// SentryEvent Sentry.Default__SentryEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryEvent* USentryEvent::GetDefaultObj()
{
	static class USentryEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryEvent*>(USentryEvent::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryEvent.SetMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryEvent::SetMessage(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "SetMessage");

	Params::USentryEvent_SetMessage_Params Parms{};

	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryEvent.SetLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESentryLevel            Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryEvent::SetLevel(enum class ESentryLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "SetLevel");

	Params::USentryEvent_SetLevel_Params Parms{};

	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryEvent.GetMessage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryEvent::GetMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "GetMessage");

	Params::USentryEvent_GetMessage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryEvent.GetLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESentryLevel            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESentryLevel USentryEvent::GetLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "GetLevel");

	Params::USentryEvent_GetLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Sentry.SentryId
// (None)

class UClass* USentryId::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryId");

	return Clss;
}


// SentryId Sentry.Default__SentryId
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryId* USentryId::GetDefaultObj()
{
	static class USentryId* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryId*>(USentryId::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryId.ToString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryId::ToString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryId", "ToString");

	Params::USentryId_ToString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Sentry.SentryLibrary
// (None)

class UClass* USentryLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryLibrary");

	return Clss;
}


// SentryLibrary Sentry.Default__SentryLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryLibrary* USentryLibrary::GetDefaultObj()
{
	static class USentryLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryLibrary*>(USentryLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryLibrary.StringToBytesArray
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InString                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> USentryLibrary::StringToBytesArray(const class FString& InString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "StringToBytesArray");

	Params::USentryLibrary_StringToBytesArray_Params Parms{};

	Parms.InString = InString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryLibrary.SaveStringToFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InString                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryLibrary::SaveStringToFile(const class FString& InString, const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "SaveStringToFile");

	Params::USentryLibrary_SaveStringToFile_Params Parms{};

	Parms.InString = InString;
	Parms.Filename = Filename;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryLibrary.CreateSentryUserFeedback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USentryId*                   EventID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Email                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Comments                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USentryUserFeedback*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentryUserFeedback* USentryLibrary::CreateSentryUserFeedback(class USentryId* EventID, const class FString& Name, const class FString& Email, const class FString& Comments)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "CreateSentryUserFeedback");

	Params::USentryLibrary_CreateSentryUserFeedback_Params Parms{};

	Parms.EventID = EventID;
	Parms.Name = Name;
	Parms.Email = Email;
	Parms.Comments = Comments;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryLibrary.CreateSentryUser
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Email                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ID                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UserName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IpAddress                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, class FString> Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class USentryUser*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentryUser* USentryLibrary::CreateSentryUser(const class FString& Email, const class FString& ID, const class FString& UserName, const class FString& IpAddress, TMap<class FString, class FString>& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "CreateSentryUser");

	Params::USentryLibrary_CreateSentryUser_Params Parms{};

	Parms.Email = Email;
	Parms.ID = ID;
	Parms.UserName = UserName;
	Parms.IpAddress = IpAddress;
	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryLibrary.CreateSentryEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESentryLevel            Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USentryEvent*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentryEvent* USentryLibrary::CreateSentryEvent(const class FString& Message, enum class ESentryLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "CreateSentryEvent");

	Params::USentryLibrary_CreateSentryEvent_Params Parms{};

	Parms.Message = Message;
	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryLibrary.CreateSentryBreadcrumb
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Type                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Category                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, class FString> Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ESentryLevel            Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USentryBreadcrumb*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentryBreadcrumb* USentryLibrary::CreateSentryBreadcrumb(const class FString& Message, const class FString& Type, const class FString& Category, TMap<class FString, class FString>& Data, enum class ESentryLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "CreateSentryBreadcrumb");

	Params::USentryLibrary_CreateSentryBreadcrumb_Params Parms{};

	Parms.Message = Message;
	Parms.Type = Type;
	Parms.Category = Category;
	Parms.Data = Data;
	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryLibrary.CreateSentryAttachmentWithPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ContentType                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USentryAttachment*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentryAttachment* USentryLibrary::CreateSentryAttachmentWithPath(const class FString& Path, const class FString& Filename, const class FString& ContentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "CreateSentryAttachmentWithPath");

	Params::USentryLibrary_CreateSentryAttachmentWithPath_Params Parms{};

	Parms.Path = Path;
	Parms.Filename = Filename;
	Parms.ContentType = ContentType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryLibrary.CreateSentryAttachmentWithData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Data                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ContentType                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USentryAttachment*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentryAttachment* USentryLibrary::CreateSentryAttachmentWithData(TArray<uint8>& Data, const class FString& Filename, const class FString& ContentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "CreateSentryAttachmentWithData");

	Params::USentryLibrary_CreateSentryAttachmentWithData_Params Parms{};

	Parms.Data = Data;
	Parms.Filename = Filename;
	Parms.ContentType = ContentType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryLibrary.ByteArrayToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Array                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryLibrary::ByteArrayToString(TArray<uint8>& Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "ByteArrayToString");

	Params::USentryLibrary_ByteArrayToString_Params Parms{};

	Parms.Array = Array;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Sentry.SentryScope
// (None)

class UClass* USentryScope::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryScope");

	return Clss;
}


// SentryScope Sentry.Default__SentryScope
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryScope* USentryScope::GetDefaultObj()
{
	static class USentryScope* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryScope*>(USentryScope::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryScope.SetTagValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryScope::SetTagValue(const class FString& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetTagValue");

	Params::USentryScope_SetTagValue_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.SetTags
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, class FString> Tags                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USentryScope::SetTags(TMap<class FString, class FString>& Tags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetTags");

	Params::USentryScope_SetTags_Params Parms{};

	Parms.Tags = Tags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.SetLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESentryLevel            Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryScope::SetLevel(enum class ESentryLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetLevel");

	Params::USentryScope_SetLevel_Params Parms{};

	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.SetFingerprint
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              Fingerprint                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void USentryScope::SetFingerprint(TArray<class FString>& Fingerprint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetFingerprint");

	Params::USentryScope_SetFingerprint_Params Parms{};

	Parms.Fingerprint = Fingerprint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.SetExtraValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryScope::SetExtraValue(const class FString& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetExtraValue");

	Params::USentryScope_SetExtraValue_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.SetExtras
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, class FString> Extras                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USentryScope::SetExtras(TMap<class FString, class FString>& Extras)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetExtras");

	Params::USentryScope_SetExtras_Params Parms{};

	Parms.Extras = Extras;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.SetEnvironment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Environment                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryScope::SetEnvironment(const class FString& Environment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetEnvironment");

	Params::USentryScope_SetEnvironment_Params Parms{};

	Parms.Environment = Environment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.SetDist
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Dist                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryScope::SetDist(const class FString& Dist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetDist");

	Params::USentryScope_SetDist_Params Parms{};

	Parms.Dist = Dist;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.SetContext
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, class FString> Values                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USentryScope::SetContext(const class FString& Key, TMap<class FString, class FString>& Values)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetContext");

	Params::USentryScope_SetContext_Params Parms{};

	Parms.Key = Key;
	Parms.Values = Values;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.RemoveTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryScope::RemoveTag(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "RemoveTag");

	Params::USentryScope_RemoveTag_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.RemoveExtra
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryScope::RemoveExtra(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "RemoveExtra");

	Params::USentryScope_RemoveExtra_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.RemoveContext
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryScope::RemoveContext(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "RemoveContext");

	Params::USentryScope_RemoveContext_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.GetTagValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryScope::GetTagValue(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetTagValue");

	Params::USentryScope_GetTagValue_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.GetTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, class FString> USentryScope::GetTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetTags");

	Params::USentryScope_GetTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.GetLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESentryLevel            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESentryLevel USentryScope::GetLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetLevel");

	Params::USentryScope_GetLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.GetFingerprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> USentryScope::GetFingerprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetFingerprint");

	Params::USentryScope_GetFingerprint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.GetExtraValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryScope::GetExtraValue(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetExtraValue");

	Params::USentryScope_GetExtraValue_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.GetExtras
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, class FString> USentryScope::GetExtras()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetExtras");

	Params::USentryScope_GetExtras_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.GetEnvironment
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryScope::GetEnvironment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetEnvironment");

	Params::USentryScope_GetEnvironment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.GetDist
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryScope::GetDist()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetDist");

	Params::USentryScope_GetDist_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.ClearBreadcrumbs
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentryScope::ClearBreadcrumbs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "ClearBreadcrumbs");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.ClearAttachments
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentryScope::ClearAttachments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "ClearAttachments");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.Clear
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentryScope::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "Clear");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.AddBreadcrumb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryBreadcrumb*           Breadcrumb                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryScope::AddBreadcrumb(class USentryBreadcrumb* Breadcrumb)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "AddBreadcrumb");

	Params::USentryScope_AddBreadcrumb_Params Parms{};

	Parms.Breadcrumb = Breadcrumb;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.AddAttachment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryAttachment*           Attachment                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryScope::AddAttachment(class USentryAttachment* Attachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "AddAttachment");

	Params::USentryScope_AddAttachment_Params Parms{};

	Parms.Attachment = Attachment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Sentry.SentrySettings
// (None)

class UClass* USentrySettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentrySettings");

	return Clss;
}


// SentrySettings Sentry.Default__SentrySettings
// (Public, ClassDefaultObject, ArchetypeObject)

class USentrySettings* USentrySettings::GetDefaultObj()
{
	static class USentrySettings* Default = nullptr;

	if (!Default)
		Default = static_cast<USentrySettings*>(USentrySettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Sentry.SentrySubsystem
// (None)

class UClass* USentrySubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentrySubsystem");

	return Clss;
}


// SentrySubsystem Sentry.Default__SentrySubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class USentrySubsystem* USentrySubsystem::GetDefaultObj()
{
	static class USentrySubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<USentrySubsystem*>(USentrySubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentrySubsystem.SetUser
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryUser*                 User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentrySubsystem::SetUser(class USentryUser* User)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "SetUser");

	Params::USentrySubsystem_SetUser_Params Parms{};

	Parms.User = User;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.SetTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentrySubsystem::SetTag(const class FString& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "SetTag");

	Params::USentrySubsystem_SetTag_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.SetLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESentryLevel            Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentrySubsystem::SetLevel(enum class ESentryLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "SetLevel");

	Params::USentrySubsystem_SetLevel_Params Parms{};

	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.SetContext
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, class FString> Values                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USentrySubsystem::SetContext(const class FString& Key, TMap<class FString, class FString>& Values)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "SetContext");

	Params::USentrySubsystem_SetContext_Params Parms{};

	Parms.Key = Key;
	Parms.Values = Values;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.RemoveUser
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentrySubsystem::RemoveUser()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "RemoveUser");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.RemoveTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentrySubsystem::RemoveTag(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "RemoveTag");

	Params::USentrySubsystem_RemoveTag_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.InitializeWithSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnConfigureSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USentrySubsystem::InitializeWithSettings(FDelegateProperty_& OnConfigureSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "InitializeWithSettings");

	Params::USentrySubsystem_InitializeWithSettings_Params Parms{};

	Parms.OnConfigureSettings = OnConfigureSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentrySubsystem::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "Initialize");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.ConfigureScope
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnConfigureScope                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USentrySubsystem::ConfigureScope(FDelegateProperty_& OnConfigureScope)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "ConfigureScope");

	Params::USentrySubsystem_ConfigureScope_Params Parms{};

	Parms.OnConfigureScope = OnConfigureScope;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.Close
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentrySubsystem::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "Close");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.ClearBreadcrumbs
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentrySubsystem::ClearBreadcrumbs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "ClearBreadcrumbs");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.CaptureUserFeedbackWithParams
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryId*                   EventID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Email                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Comments                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentrySubsystem::CaptureUserFeedbackWithParams(class USentryId* EventID, const class FString& Email, const class FString& Comments, const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "CaptureUserFeedbackWithParams");

	Params::USentrySubsystem_CaptureUserFeedbackWithParams_Params Parms{};

	Parms.EventID = EventID;
	Parms.Email = Email;
	Parms.Comments = Comments;
	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.CaptureUserFeedback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryUserFeedback*         UserFeedback                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentrySubsystem::CaptureUserFeedback(class USentryUserFeedback* UserFeedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "CaptureUserFeedback");

	Params::USentrySubsystem_CaptureUserFeedback_Params Parms{};

	Parms.UserFeedback = UserFeedback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.CaptureMessageWithScope
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnConfigureScope                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESentryLevel            Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USentryId*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentryId* USentrySubsystem::CaptureMessageWithScope(const class FString& Message, FDelegateProperty_& OnConfigureScope, enum class ESentryLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "CaptureMessageWithScope");

	Params::USentrySubsystem_CaptureMessageWithScope_Params Parms{};

	Parms.Message = Message;
	Parms.OnConfigureScope = OnConfigureScope;
	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.CaptureMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESentryLevel            Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USentryId*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentryId* USentrySubsystem::CaptureMessage(const class FString& Message, enum class ESentryLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "CaptureMessage");

	Params::USentrySubsystem_CaptureMessage_Params Parms{};

	Parms.Message = Message;
	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.CaptureEventWithScope
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USentryEvent*                Event                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnConfigureScope                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class USentryId*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentryId* USentrySubsystem::CaptureEventWithScope(class USentryEvent* Event, FDelegateProperty_& OnConfigureScope)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "CaptureEventWithScope");

	Params::USentrySubsystem_CaptureEventWithScope_Params Parms{};

	Parms.Event = Event;
	Parms.OnConfigureScope = OnConfigureScope;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.CaptureEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryEvent*                Event                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USentryId*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentryId* USentrySubsystem::CaptureEvent(class USentryEvent* Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "CaptureEvent");

	Params::USentrySubsystem_CaptureEvent_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.AddBreadcrumbWithParams
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Category                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Type                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, class FString> Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ESentryLevel            Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentrySubsystem::AddBreadcrumbWithParams(const class FString& Message, const class FString& Category, const class FString& Type, TMap<class FString, class FString>& Data, enum class ESentryLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "AddBreadcrumbWithParams");

	Params::USentrySubsystem_AddBreadcrumbWithParams_Params Parms{};

	Parms.Message = Message;
	Parms.Category = Category;
	Parms.Type = Type;
	Parms.Data = Data;
	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.AddBreadcrumb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryBreadcrumb*           Breadcrumb                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentrySubsystem::AddBreadcrumb(class USentryBreadcrumb* Breadcrumb)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "AddBreadcrumb");

	Params::USentrySubsystem_AddBreadcrumb_Params Parms{};

	Parms.Breadcrumb = Breadcrumb;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Sentry.SentryUser
// (None)

class UClass* USentryUser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryUser");

	return Clss;
}


// SentryUser Sentry.Default__SentryUser
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryUser* USentryUser::GetDefaultObj()
{
	static class USentryUser* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryUser*>(USentryUser::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryUser.SetUsername
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      UserName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryUser::SetUsername(const class FString& UserName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "SetUsername");

	Params::USentryUser_SetUsername_Params Parms{};

	Parms.UserName = UserName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUser.SetIpAddress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      IpAddress                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryUser::SetIpAddress(const class FString& IpAddress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "SetIpAddress");

	Params::USentryUser_SetIpAddress_Params Parms{};

	Parms.IpAddress = IpAddress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUser.SetId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ID                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryUser::SetId(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "SetId");

	Params::USentryUser_SetId_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUser.SetEmail
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Email                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryUser::SetEmail(const class FString& Email)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "SetEmail");

	Params::USentryUser_SetEmail_Params Parms{};

	Parms.Email = Email;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUser.SetData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, class FString> Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USentryUser::SetData(TMap<class FString, class FString>& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "SetData");

	Params::USentryUser_SetData_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUser.GetUsername
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryUser::GetUsername()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "GetUsername");

	Params::USentryUser_GetUsername_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryUser.GetIpAddress
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryUser::GetIpAddress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "GetIpAddress");

	Params::USentryUser_GetIpAddress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryUser.GetId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryUser::GetId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "GetId");

	Params::USentryUser_GetId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryUser.GetEmail
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryUser::GetEmail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "GetEmail");

	Params::USentryUser_GetEmail_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryUser.GetData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, class FString> USentryUser::GetData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "GetData");

	Params::USentryUser_GetData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Sentry.SentryUserFeedback
// (None)

class UClass* USentryUserFeedback::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryUserFeedback");

	return Clss;
}


// SentryUserFeedback Sentry.Default__SentryUserFeedback
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryUserFeedback* USentryUserFeedback::GetDefaultObj()
{
	static class USentryUserFeedback* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryUserFeedback*>(USentryUserFeedback::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryUserFeedback.SetName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryUserFeedback::SetName(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "SetName");

	Params::USentryUserFeedback_SetName_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUserFeedback.SetEmail
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Email                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryUserFeedback::SetEmail(const class FString& Email)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "SetEmail");

	Params::USentryUserFeedback_SetEmail_Params Parms{};

	Parms.Email = Email;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUserFeedback.SetComment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Comments                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryUserFeedback::SetComment(const class FString& Comments)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "SetComment");

	Params::USentryUserFeedback_SetComment_Params Parms{};

	Parms.Comments = Comments;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUserFeedback.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryId*                   EventID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryUserFeedback::Initialize(class USentryId* EventID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "Initialize");

	Params::USentryUserFeedback_Initialize_Params Parms{};

	Parms.EventID = EventID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUserFeedback.GetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryUserFeedback::GetName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "GetName");

	Params::USentryUserFeedback_GetName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryUserFeedback.GetEmail
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryUserFeedback::GetEmail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "GetEmail");

	Params::USentryUserFeedback_GetEmail_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryUserFeedback.GetComment
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryUserFeedback::GetComment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "GetComment");

	Params::USentryUserFeedback_GetComment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


