#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SocketSubsystemSpark.SparkNetConnection
// (None)

class UClass* USparkNetConnection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SparkNetConnection");

	return Clss;
}


// SparkNetConnection SocketSubsystemSpark.Default__SparkNetConnection
// (Public, ClassDefaultObject, ArchetypeObject)

class USparkNetConnection* USparkNetConnection::GetDefaultObj()
{
	static class USparkNetConnection* Default = nullptr;

	if (!Default)
		Default = static_cast<USparkNetConnection*>(USparkNetConnection::StaticClass()->DefaultObject);

	return Default;
}


// Class SocketSubsystemSpark.SparkBeaconNetConnection
// (None)

class UClass* USparkBeaconNetConnection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SparkBeaconNetConnection");

	return Clss;
}


// SparkBeaconNetConnection SocketSubsystemSpark.Default__SparkBeaconNetConnection
// (Public, ClassDefaultObject, ArchetypeObject)

class USparkBeaconNetConnection* USparkBeaconNetConnection::GetDefaultObj()
{
	static class USparkBeaconNetConnection* Default = nullptr;

	if (!Default)
		Default = static_cast<USparkBeaconNetConnection*>(USparkBeaconNetConnection::StaticClass()->DefaultObject);

	return Default;
}


// Class SocketSubsystemSpark.SparkNetDriver
// (None)

class UClass* USparkNetDriver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SparkNetDriver");

	return Clss;
}


// SparkNetDriver SocketSubsystemSpark.Default__SparkNetDriver
// (Public, ClassDefaultObject, ArchetypeObject)

class USparkNetDriver* USparkNetDriver::GetDefaultObj()
{
	static class USparkNetDriver* Default = nullptr;

	if (!Default)
		Default = static_cast<USparkNetDriver*>(USparkNetDriver::StaticClass()->DefaultObject);

	return Default;
}


// Class SocketSubsystemSpark.SparkBeaconNetDriver
// (None)

class UClass* USparkBeaconNetDriver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SparkBeaconNetDriver");

	return Clss;
}


// SparkBeaconNetDriver SocketSubsystemSpark.Default__SparkBeaconNetDriver
// (Public, ClassDefaultObject, ArchetypeObject)

class USparkBeaconNetDriver* USparkBeaconNetDriver::GetDefaultObj()
{
	static class USparkBeaconNetDriver* Default = nullptr;

	if (!Default)
		Default = static_cast<USparkBeaconNetDriver*>(USparkBeaconNetDriver::StaticClass()->DefaultObject);

	return Default;
}

}


