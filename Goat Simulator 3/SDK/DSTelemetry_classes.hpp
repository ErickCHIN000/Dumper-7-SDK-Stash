#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class DSTelemetry.DJSONArray
class UDJSONArray : public UObject
{
public:
	uint8                                        Pad_39F[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDJSONArray* GetDefaultObj();

	class UDJSONArray* CreateJSONArray(class UObject* WorldContextObject);
	bool Clear();
	class FString AsString();
	bool AddStringItem(const class FString& Item);
	bool AddStringArrayItem(const TArray<class FString>& Item);
	bool AddJSONObjectItem(class UDJSONObject* Item);
	bool AddJSONObjectArrayItem(const TArray<class UDJSONObject*>& Item);
	bool AddJSONArrayItem(class UDJSONArray* Item);
	bool AddJSONArrayArrayItem(const TArray<class UDJSONArray*>& Item);
	bool AddIntegerItem(int32 Item);
	bool AddIntegerArrayItem(const TArray<int32>& Item);
	bool AddFloatItem(float Item);
	bool AddFloatArrayItem(const TArray<float>& Item);
	bool AddEmptyItem();
	bool AddBooleanItem(bool Item);
	bool AddBooleanArrayItem(const TArray<bool>& Item);
};

// 0x18 (0x40 - 0x28)
// Class DSTelemetry.DJSONObject
class UDJSONObject : public UObject
{
public:
	uint8                                        Pad_4BA[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDJSONObject* GetDefaultObj();

	class UDJSONObject* CreateJSONObject(class UObject* WorldContextObject);
	bool Clear();
	class FString AsString();
	bool AddStringField(const class FString& Key, const class FString& Value);
	bool AddStringArrayField(const class FString& Key, const TArray<class FString>& Value);
	bool AddJSONObjectField(const class FString& Key, class UDJSONObject* Value);
	bool AddJSONObjectArrayField(const class FString& Key, const TArray<class UDJSONObject*>& Value);
	bool AddJSONArrayField(const class FString& Key, class UDJSONArray* Value);
	bool AddJSONArrayArrayField(const class FString& Key, const TArray<class UDJSONArray*>& Value);
	bool AddIntegerField(const class FString& Key, int32 Value);
	bool AddIntegerArrayField(const class FString& Key, const TArray<int32>& Value);
	bool AddFloatField(const class FString& Key, float Value);
	bool AddFloatArrayField(const class FString& Key, const TArray<float>& Value);
	bool AddEmptyField(const class FString& Key);
	bool AddBooleanField(const class FString& Key, bool Value);
	bool AddBooleanArrayField(const class FString& Key, const TArray<bool>& Value);
};

// 0x8 (0x30 - 0x28)
// Class DSTelemetry.DSTelemetry
class UDSTelemetry : public UObject
{
public:
	uint8                                        Pad_5BE[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDSTelemetry* GetDefaultObj();

	void Terminate();
	bool SubmitString(const class FString& EventKey, const class FString& EventData);
	bool SubmitSerialized(const class FString& EventKey, const class FString& EventData);
	bool SubmitJSONObject(const class FString& EventKey, class UDJSONObject* EventData);
	bool SubmitJSONArray(const class FString& EventKey, class UDJSONArray* EventData);
	bool SubmitInteger(const class FString& EventKey, int32 EventData);
	bool SubmitFloat(const class FString& EventKey, float EventData);
	bool SubmitEmpty(const class FString& EventKey);
	bool SubmitBoolean(const class FString& EventKey, bool EventData);
	bool Start(const class FString& GameID, const class FString& BuildID);
	bool SetStateString(const class FString& StateKey, const class FString& StateData);
	bool SetStateSerialized(const class FString& StateKey, const class FString& StateData);
	bool SetStateJSONObject(const class FString& StateKey, class UDJSONObject* StateData);
	bool SetStateJSONArray(const class FString& StateKey, class UDJSONArray* StateData);
	bool SetStateInteger(const class FString& StateKey, int32 StateData);
	bool SetStateFloat(const class FString& StateKey, float StateData);
	bool SetStateEmpty(const class FString& StateKey);
	bool SetStateBoolean(const class FString& StateKey, bool StateData);
	bool SetOnlinePlatformUserID(const class FString& OnlinePlatformUserID);
	bool SetOnlinePlatformIdentifier(const class FString& OnlinePlatformIdentifier);
	void Resume();
	void Pause();
	bool IsTerminated();
	bool IsPaused();
	int64 GetTelemetryInstanceID();
	class UDSTelemetry* CreateTelemetry(class UObject* WorldContextObject);
};

}


