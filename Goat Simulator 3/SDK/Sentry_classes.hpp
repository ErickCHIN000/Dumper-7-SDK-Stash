#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryAttachment
class USentryAttachment : public UObject
{
public:
	uint8                                        Pad_CD[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentryAttachment* GetDefaultObj();

	void InitializeWithPath(const class FString& Path, const class FString& Filename, const class FString& ContentType);
	void InitializeWithData(TArray<uint8>& Data, const class FString& Filename, const class FString& ContentType);
	class FString GetPath();
	class FString GetFilename();
	TArray<uint8> GetData();
	class FString GetContentType();
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryBreadcrumb
class USentryBreadcrumb : public UObject
{
public:
	uint8                                        Pad_EA[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentryBreadcrumb* GetDefaultObj();

	void SetType(const class FString& Type);
	void SetMessage(const class FString& Message);
	void SetLevel(enum class ESentryLevel Level);
	void SetData(TMap<class FString, class FString>& Data);
	void SetCategory(const class FString& Category);
	class FString GetType();
	class FString GetMessage();
	enum class ESentryLevel GetLevel();
	TMap<class FString, class FString> GetData();
	class FString GetCategory();
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryEvent
class USentryEvent : public UObject
{
public:
	uint8                                        Pad_F7[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentryEvent* GetDefaultObj();

	void SetMessage(const class FString& Message);
	void SetLevel(enum class ESentryLevel Level);
	class FString GetMessage();
	enum class ESentryLevel GetLevel();
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryId
class USentryId : public UObject
{
public:
	uint8                                        Pad_101[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentryId* GetDefaultObj();

	class FString ToString();
};

// 0x0 (0x28 - 0x28)
// Class Sentry.SentryLibrary
class USentryLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USentryLibrary* GetDefaultObj();

	TArray<uint8> StringToBytesArray(const class FString& InString);
	class FString SaveStringToFile(const class FString& InString, const class FString& Filename);
	class USentryUserFeedback* CreateSentryUserFeedback(class USentryId* EventID, const class FString& Name, const class FString& Email, const class FString& Comments);
	class USentryUser* CreateSentryUser(const class FString& Email, const class FString& ID, const class FString& UserName, const class FString& IpAddress, TMap<class FString, class FString>& Data);
	class USentryEvent* CreateSentryEvent(const class FString& Message, enum class ESentryLevel Level);
	class USentryBreadcrumb* CreateSentryBreadcrumb(const class FString& Message, const class FString& Type, const class FString& Category, TMap<class FString, class FString>& Data, enum class ESentryLevel Level);
	class USentryAttachment* CreateSentryAttachmentWithPath(const class FString& Path, const class FString& Filename, const class FString& ContentType);
	class USentryAttachment* CreateSentryAttachmentWithData(TArray<uint8>& Data, const class FString& Filename, const class FString& ContentType);
	class FString ByteArrayToString(TArray<uint8>& Array);
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryScope
class USentryScope : public UObject
{
public:
	uint8                                        Pad_25A[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentryScope* GetDefaultObj();

	void SetTagValue(const class FString& Key, const class FString& Value);
	void SetTags(TMap<class FString, class FString>& Tags);
	void SetLevel(enum class ESentryLevel Level);
	void SetFingerprint(TArray<class FString>& Fingerprint);
	void SetExtraValue(const class FString& Key, const class FString& Value);
	void SetExtras(TMap<class FString, class FString>& Extras);
	void SetEnvironment(const class FString& Environment);
	void SetDist(const class FString& Dist);
	void SetContext(const class FString& Key, TMap<class FString, class FString>& Values);
	void RemoveTag(const class FString& Key);
	void RemoveExtra(const class FString& Key);
	void RemoveContext(const class FString& Key);
	class FString GetTagValue(const class FString& Key);
	TMap<class FString, class FString> GetTags();
	enum class ESentryLevel GetLevel();
	TArray<class FString> GetFingerprint();
	class FString GetExtraValue(const class FString& Key);
	TMap<class FString, class FString> GetExtras();
	class FString GetEnvironment();
	class FString GetDist();
	void ClearBreadcrumbs();
	void ClearAttachments();
	void Clear();
	void AddBreadcrumb(class USentryBreadcrumb* Breadcrumb);
	void AddAttachment(class USentryAttachment* Attachment);
};

// 0x88 (0xB0 - 0x28)
// Class Sentry.SentrySettings
class USentrySettings : public UObject
{
public:
	class FString                                DsnUrl;                                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Release;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Environment;                                       // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InitAutomatically;                                 // 0x58(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableVerboseLogging;                              // 0x59(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAutomaticBreadcrumbs                 AutomaticBreadcrumbs;                              // 0x5A(0x5)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FTagsPromotion                        TagsPromotion;                                     // 0x5F(0x6)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         EnableAutoCrashCapturing;                          // 0x65(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableAutoLogAttachment;                           // 0x66(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UploadSymbolsAutomatically;                        // 0x67(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProjectName;                                       // 0x68(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OrgName;                                           // 0x78(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AuthToken;                                         // 0x88(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IncludeSources;                                    // 0x98(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CrashReporterUrl;                                  // 0xA0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USentrySettings* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class Sentry.SentrySubsystem
class USentrySubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_2E9[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentrySubsystem* GetDefaultObj();

	void SetUser(class USentryUser* User);
	void SetTag(const class FString& Key, const class FString& Value);
	void SetLevel(enum class ESentryLevel Level);
	void SetContext(const class FString& Key, TMap<class FString, class FString>& Values);
	void RemoveUser();
	void RemoveTag(const class FString& Key);
	void InitializeWithSettings(FDelegateProperty_& OnConfigureSettings);
	void Initialize();
	void ConfigureScope(FDelegateProperty_& OnConfigureScope);
	void Close();
	void ClearBreadcrumbs();
	void CaptureUserFeedbackWithParams(class USentryId* EventID, const class FString& Email, const class FString& Comments, const class FString& Name);
	void CaptureUserFeedback(class USentryUserFeedback* UserFeedback);
	class USentryId* CaptureMessageWithScope(const class FString& Message, FDelegateProperty_& OnConfigureScope, enum class ESentryLevel Level);
	class USentryId* CaptureMessage(const class FString& Message, enum class ESentryLevel Level);
	class USentryId* CaptureEventWithScope(class USentryEvent* Event, FDelegateProperty_& OnConfigureScope);
	class USentryId* CaptureEvent(class USentryEvent* Event);
	void AddBreadcrumbWithParams(const class FString& Message, const class FString& Category, const class FString& Type, TMap<class FString, class FString>& Data, enum class ESentryLevel Level);
	void AddBreadcrumb(class USentryBreadcrumb* Breadcrumb);
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryUser
class USentryUser : public UObject
{
public:
	uint8                                        Pad_36E[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentryUser* GetDefaultObj();

	void SetUsername(const class FString& UserName);
	void SetIpAddress(const class FString& IpAddress);
	void SetId(const class FString& ID);
	void SetEmail(const class FString& Email);
	void SetData(TMap<class FString, class FString>& Data);
	class FString GetUsername();
	class FString GetIpAddress();
	class FString GetId();
	class FString GetEmail();
	TMap<class FString, class FString> GetData();
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryUserFeedback
class USentryUserFeedback : public UObject
{
public:
	uint8                                        Pad_3C8[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentryUserFeedback* GetDefaultObj();

	void SetName(const class FString& Name);
	void SetEmail(const class FString& Email);
	void SetComment(const class FString& Comments);
	void Initialize(class USentryId* EventID);
	class FString GetName();
	class FString GetEmail();
	class FString GetComment();
};

}


