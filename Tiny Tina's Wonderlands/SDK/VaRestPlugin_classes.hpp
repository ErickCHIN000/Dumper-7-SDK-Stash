#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class VaRestPlugin.VaRestJsonObject
class UVaRestJsonObject : public UObject
{
public:
	uint8                                        Pad_7A5[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVaRestJsonObject* GetDefaultObj();

	void SetStringField(const class FString& FieldName, const class FString& StringValue);
	void SetStringArrayField(const class FString& FieldName, TArray<class FString>& StringArray);
	void SetObjectField(const class FString& FieldName, class UVaRestJsonObject* JsonObject);
	void SetObjectArrayField(const class FString& FieldName, TArray<class UVaRestJsonObject*>& ObjectArray);
	void SetNumberField(const class FString& FieldName, float Number);
	void SetNumberArrayField(const class FString& FieldName, TArray<float>& NumberArray);
	void SetField(const class FString& FieldName, class UVaRestJsonValue* JsonValue);
	void SetBoolField(const class FString& FieldName, bool InValue);
	void SetBoolArrayField(const class FString& FieldName, TArray<bool>& BoolArray);
	void SetArrayField(const class FString& FieldName, TArray<class UVaRestJsonValue*>& InArray);
	void Reset();
	void RemoveField(const class FString& FieldName);
	void MergeJsonObject(class UVaRestJsonObject* InJsonObject, bool Overwrite);
	bool HasField(const class FString& FieldName);
	class FString GetStringField(const class FString& FieldName);
	TArray<class FString> GetStringArrayField(const class FString& FieldName);
	class UVaRestJsonObject* GetObjectField(const class FString& FieldName);
	TArray<class UVaRestJsonObject*> GetObjectArrayField(const class FString& FieldName);
	float GetNumberField(const class FString& FieldName);
	TArray<float> GetNumberArrayField(const class FString& FieldName);
	TArray<class FString> GetFieldNames();
	class UVaRestJsonValue* GetField(const class FString& FieldName);
	bool GetBoolField(const class FString& FieldName);
	TArray<bool> GetBoolArrayField(const class FString& FieldName);
	TArray<class UVaRestJsonValue*> GetArrayField(const class FString& FieldName);
	class FString EncodeJsonToSingleString();
	class FString EncodeJson();
	bool DecodeJson(const class FString& JsonString);
	class UVaRestJsonObject* ConstructJsonObject(class UObject* WorldContextObject);
};

// 0x10 (0x38 - 0x28)
// Class VaRestPlugin.VaRestJsonValue
class UVaRestJsonValue : public UObject
{
public:
	uint8                                        Pad_83D[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVaRestJsonValue* GetDefaultObj();

	bool IsNull();
	class FString GetTypeString();
	enum class EVaJson GetType();
	class UVaRestJsonValue* ConstructJsonValueString(class UObject* WorldContextObject, const class FString& StringValue);
	class UVaRestJsonValue* ConstructJsonValueObject(class UObject* WorldContextObject, class UVaRestJsonObject* JsonObject);
	class UVaRestJsonValue* ConstructJsonValueNumber(class UObject* WorldContextObject, float Number);
	class UVaRestJsonValue* ConstructJsonValueBool(class UObject* WorldContextObject, bool InValue);
	class UVaRestJsonValue* ConstructJsonValueArray(class UObject* WorldContextObject, TArray<class UVaRestJsonValue*>& InArray);
	class FString AsString();
	class UVaRestJsonObject* AsObject();
	float AsNumber();
	bool AsBool();
	TArray<class UVaRestJsonValue*> AsArray();
};

// 0x0 (0x28 - 0x28)
// Class VaRestPlugin.VaRestLibrary
class UVaRestLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UVaRestLibrary* GetDefaultObj();

	class FString PercentEncode(const class FString& Source);
	void CallURL(class UObject* WorldContextObject, const class FString& URL, enum class ERequestVerb Verb, enum class ERequestContentType ContentType, class UVaRestJsonObject* VaRestJson, UDelegateProperty_& Callback);
	bool Base64EncodeData(TArray<uint8>& Data, class FString* Dest);
	class FString Base64Encode(const class FString& Source);
	bool Base64DecodeData(const class FString& Source, TArray<uint8>* Dest);
	bool Base64Decode(const class FString& Source, class FString* Dest);
};

// 0x190 (0x1B8 - 0x28)
// Class VaRestPlugin.VaRestRequestJSON
class UVaRestRequestJSON : public UObject
{
public:
	UMulticastDelegateProperty_                  OnRequestComplete;                                 // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnRequestFail;                                     // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_946[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ResponseContent;                                   // 0x88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidJsonResponse;                              // 0x98(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_94A[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UVaRestJsonObject*                     RequestJsonObj;                                    // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_94C[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVaRestJsonObject*                     ResponseJsonObj;                                   // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_94E[0xD0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVaRestRequestJSON* GetDefaultObj();

	void SetVerb(enum class ERequestVerb Verb);
	void SetStringRequestContent(const class FString& Content);
	void SetResponseObject(class UVaRestJsonObject* JsonObject);
	void SetRequestObject(class UVaRestJsonObject* JsonObject);
	void SetHeader(const class FString& HeaderName, const class FString& HeaderValue);
	void SetCustomVerb(const class FString& Verb);
	void SetContentType(enum class ERequestContentType ContentType);
	void SetBinaryRequestContent(TArray<uint8>& Content);
	void SetBinaryContentType(const class FString& ContentType);
	void ResetResponseData();
	void ResetRequestData();
	void ResetData();
	int32 RemoveTag(class FName Tag);
	void ProcessURL(const class FString& URL);
	bool HasTag(class FName Tag);
	class FString GetURL();
	enum class ERequestStatus GetStatus();
	class UVaRestJsonObject* GetResponseObject();
	class FString GetResponseHeader(const class FString& HeaderName);
	int32 GetResponseCode();
	class UVaRestJsonObject* GetRequestObject();
	TArray<class FString> GetAllResponseHeaders();
	class UVaRestRequestJSON* ConstructRequestExt(class UObject* WorldContextObject, enum class ERequestVerb Verb, enum class ERequestContentType ContentType);
	class UVaRestRequestJSON* ConstructRequest(class UObject* WorldContextObject);
	void Cancel();
	void ApplyURL(const class FString& URL, class UVaRestJsonObject** Result, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void AddTag(class FName Tag);
};

}


