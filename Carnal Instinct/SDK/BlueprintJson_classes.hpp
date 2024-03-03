#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class BlueprintJson.JsonLibrary
class UJsonLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UJsonLibrary* GetDefaultObj();

	bool StringifyJsonObject(class UJsonObject* Object, class FString* OutJsonString);
	class UJsonObject* LoadJsonFile(const class FString& FilePath);
	class UJsonValue* JsonValue_Vector2D(struct FVector2D& Value);
	class UJsonValue* JsonValue_Vector(struct FVector& Value);
	class UJsonValue* JsonValue_Transform(struct FTransform& Value);
	struct FVector JsonValue_ToVector(class UJsonValue* Object);
	struct FTransform JsonValue_ToTransform(class UJsonValue* Object);
	class FString JsonValue_ToString(class UJsonValue* Object);
	struct FRotator JsonValue_ToRotator(class UJsonValue* Object);
	class UJsonObject* JsonValue_ToObject(class UJsonValue* Object);
	int64 JsonValue_ToInteger64(class UJsonValue* Object);
	int32 JsonValue_ToInteger(class UJsonValue* Object);
	float JsonValue_ToFloat(class UJsonValue* Object);
	bool JsonValue_ToBool(class UJsonValue* Object);
	TArray<class UJsonValue*> JsonValue_ToArray(class UJsonValue* Object);
	class UJsonValue* JsonValue_Text(class FText& Value);
	class UJsonValue* JsonValue_String(const class FString& Value);
	class UJsonValue* JsonValue_Rotator(struct FRotator& Value);
	class UJsonValue* JsonValue_Quat(struct FQuat& Value);
	class UJsonValue* JsonValue_Name(class FName& Value);
	class UJsonValue* JsonValue_LinearColor(struct FLinearColor& Value);
	class UJsonValue* JsonValue_JsonObject(class UJsonObject* Value);
	class UJsonValue* JsonValue_Int64(int64 Value);
	class UJsonValue* JsonValue_HitResult(struct FHitResult& Value);
	class UJsonValue* JsonValue_Float(float Value);
	class UJsonValue* JsonValue_Color(struct FColor& Value);
	class UJsonValue* JsonValue_Boolean(bool Value);
	class UJsonValue* JsonValue_Bool(int32 Value);
	class FString GetFieldAsString(struct FLightJsonObject& Object, const class FString& FieldName);
	TArray<struct FLightJsonObject> GetFieldAsObjectArray(struct FLightJsonObject& Object, const class FString& FieldName);
	struct FLightJsonObject GetFieldAsObject(struct FLightJsonObject& Object, const class FString& FieldName);
	int64 GetFieldAsInt64(struct FLightJsonObject& Object, const class FString& FieldName);
	int32 GetFieldAsInt32(struct FLightJsonObject& Object, const class FString& FieldName);
	TArray<float> GetFieldAsFloatArray(struct FLightJsonObject& Object, const class FString& FieldName);
	float GetFieldAsFloat(struct FLightJsonObject& Object, const class FString& FieldName);
	class UJsonObject* ConvertLightObject(struct FLightJsonObject& Object);
};

// 0x0 (0x28 - 0x28)
// Class BlueprintJson.InternalJsonLibrary
class UInternalJsonLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UInternalJsonLibrary* GetDefaultObj();

	void JO_AddField_Vector2D(class UJsonObject* JsonObject, const class FString& FieldName, struct FVector2D& FieldValue);
	void JO_AddField_Vector(class UJsonObject* JsonObject, const class FString& FieldName, struct FVector& FieldValue);
	void JO_AddField_Transform(class UJsonObject* JsonObject, const class FString& FieldName, struct FTransform& FieldValue);
	void JO_AddField_Text(class UJsonObject* JsonObject, const class FString& FieldName, class FText& FieldValue);
	void JO_AddField_String(class UJsonObject* JsonObject, const class FString& FieldName, const class FString& FieldValue);
	void JO_AddField_Rotator(class UJsonObject* JsonObject, const class FString& FieldName, struct FRotator& FieldValue);
	void JO_AddField_Quat(class UJsonObject* JsonObject, const class FString& FieldName, struct FQuat& FieldValue);
	void JO_AddField_Object(class UJsonObject* JsonObject, const class FString& FieldName, class UObject* FieldValue);
	void JO_AddField_Name(class UJsonObject* JsonObject, const class FString& FieldName, class FName& FieldValue);
	void JO_AddField_LinearColor(class UJsonObject* JsonObject, const class FString& FieldName, struct FLinearColor& FieldValue);
	void JO_AddField_Int64(class UJsonObject* JsonObject, const class FString& FieldName, int64 FieldValue);
	void JO_AddField_Int(class UJsonObject* JsonObject, const class FString& FieldName, int32 FieldValue);
	void JO_AddField_HitResult(class UJsonObject* JsonObject, const class FString& FieldName, struct FHitResult& FieldValue);
	void JO_AddField_Float(class UJsonObject* JsonObject, const class FString& FieldName, float FieldValue);
	void JO_AddField_Boolean(class UJsonObject* JsonObject, const class FString& FieldName, bool FieldValue);
	void JO_AddField_Arr_Vector2D(class UJsonObject* JsonObject, const class FString& FieldName, TArray<struct FVector2D>& FieldValue);
	void JO_AddField_Arr_Vector(class UJsonObject* JsonObject, const class FString& FieldName, TArray<struct FVector>& FieldValue);
	void JO_AddField_Arr_Transform(class UJsonObject* JsonObject, const class FString& FieldName, TArray<struct FTransform>& FieldValue);
	void JO_AddField_Arr_String(class UJsonObject* JsonObject, const class FString& FieldName, TArray<class FString>& FieldValue);
	void JO_AddField_Arr_Rotator(class UJsonObject* JsonObject, const class FString& FieldName, TArray<struct FRotator>& FieldValue);
	void JO_AddField_Arr_Quat(class UJsonObject* JsonObject, const class FString& FieldName, TArray<struct FQuat>& FieldValue);
	void JO_AddField_Arr_Object(class UJsonObject* JsonObject, const class FString& FieldName, TArray<class UObject*>& FieldValue);
	void JO_AddField_Arr_LinearColor(class UJsonObject* JsonObject, const class FString& FieldName, TArray<struct FLinearColor>& FieldValue);
	void JO_AddField_Arr_Int64(class UJsonObject* JsonObject, const class FString& FieldName, TArray<int64>& FieldValue);
	void JO_AddField_Arr_Int(class UJsonObject* JsonObject, const class FString& FieldName, TArray<int32>& FieldValue);
	void JO_AddField_Arr_HitResult(class UJsonObject* JsonObject, const class FString& FieldName, TArray<struct FHitResult>& FieldValue);
	void JO_AddField_Arr_Float(class UJsonObject* JsonObject, const class FString& FieldName, TArray<float>& FieldValue);
	void JO_AddField_Arr_Boolean(class UJsonObject* JsonObject, const class FString& FieldName, TArray<bool>& FieldValue);
};

// 0x30 (0x60 - 0x30)
// Class BlueprintJson.JsonLoadAsyncProxyBase
class UJsonLoadAsyncProxyBase : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Success;                                           // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            Failed;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BE[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UJsonLoadAsyncProxyBase* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class BlueprintJson.JsonLoadAsyncFromFileProxy
class UJsonLoadAsyncFromFileProxy : public UJsonLoadAsyncProxyBase
{
public:
	uint8                                        Pad_3EC[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UJsonLoadAsyncFromFileProxy* GetDefaultObj();

	class UJsonLoadAsyncFromFileProxy* LoadJsonFileAsync(const class FString& FilePath);
};

// 0x0 (0x60 - 0x60)
// Class BlueprintJson.JsonParseAsyncProxy
class UJsonParseAsyncProxy : public UJsonLoadAsyncProxyBase
{
public:

	static class UClass* StaticClass();
	static class UJsonParseAsyncProxy* GetDefaultObj();

	class UJsonParseAsyncProxy* ParseJsonAsync(const class FString& Json);
};

// 0x38 (0x68 - 0x30)
// Class BlueprintJson.JsonSaveAsyncProxy
class UJsonSaveAsyncProxy : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Success;                                           // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            Failed;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_43B[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UJsonObject*                           ObjectToSave;                                      // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UJsonSaveAsyncProxy* GetDefaultObj();

	class UJsonSaveAsyncProxy* SaveJsonToFileAsync(const class FString& FilePath, class UJsonObject* ObjectToSave);
};

// 0x10 (0x38 - 0x28)
// Class BlueprintJson.JsonValue
class UJsonValue : public UObject
{
public:
	uint8                                        Pad_460[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UJsonValue* GetDefaultObj();

	void SwitchValueType(enum class EJsonType* Branches);
	bool IsNull();
};

// 0x10 (0x38 - 0x28)
// Class BlueprintJson.JsonObject
class UJsonObject : public UObject
{
public:
	uint8                                        Pad_836[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UJsonObject* GetDefaultObj();

	class UJsonValue* ToJsonValue();
	void SetVectorField(const class FString& FieldName, struct FVector& FieldValue);
	void SetVector2DField(const class FString& FieldName, struct FVector2D& FieldValue);
	void SetUObjectField(const class FString& FieldName, class UObject* FieldValue);
	void SetTransformField(const class FString& FieldName, struct FTransform& FieldValue);
	void SetStringField(const class FString& FieldName, const class FString& FieldValue);
	void SetRotatorField(const class FString& FieldName, struct FRotator& FieldValue);
	void SetQuatField(const class FString& FieldName, struct FQuat& FieldValue);
	void SetObjectField(const class FString& FieldName, class UJsonObject* JsonObject);
	void SetNullField(const class FString& FieldName);
	void SetLinearColorField(const class FString& FieldName, struct FLinearColor& FieldValue);
	void SetIntegerField(const class FString& FieldName, int32 FieldValue);
	void SetInteger64Field(const class FString& FieldName, int64 FieldValue);
	void SetHitResultField(const class FString& FieldName, struct FHitResult& FieldValue);
	void SetFloatField(const class FString& FieldName, float FieldValue);
	void SetField(const class FString& FieldName, class UJsonValue* FieldValue);
	void SetColorField(const class FString& FieldName, struct FColor& FieldValue);
	void SetBooleanField(const class FString& FieldName, bool FieldValue);
	void SetArrayField(const class FString& FieldName, TArray<class UJsonValue*>& FieldValue);
	class UJsonObject* ParseJson(const class FString& Json, bool* bSuccess);
	bool IsFieldNull(const class FString& FieldName);
	bool HasField(const class FString& FieldName);
	struct FVector GetFieldAsVector(const class FString& FieldName);
	class UJsonValue* GetFieldAsValue(const class FString& FieldName);
	class FString GetFieldAsString(const class FString& FieldName);
	struct FLightJsonObject GetFieldAsObjectWrapper(const class FString& FieldName);
	class UJsonObject* GetFieldAsObjectExec(const class FString& FieldName);
	class UJsonObject* GetFieldAsObject(const class FString& FieldName);
	int64 GetFieldAsInteger64(const class FString& FieldName);
	int32 GetFieldAsInteger(const class FString& FieldName);
	TArray<int32> GetFieldAsInt32Array(const class FString& FieldName);
	TArray<float> GetFieldAsFloatArray(const class FString& FieldName);
	float GetFieldAsFloat(const class FString& FieldName);
	bool GetFieldAsBoolean(const class FString& FieldName);
	TArray<class UJsonValue*> GetFieldAsArrayExec(const class FString& FieldName);
	TArray<class UJsonValue*> GetFieldAsArray(const class FString& FieldName);
	void GetAllProperties(TArray<struct FJsonObjectField>* OutValues);
	class UJsonObject* CreateJsonObject();
};

}


