///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Definitions //////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef CRUX_PROVIDER_SQL_ENGINE_PG_HPP
#define CRUX_PROVIDER_SQL_ENGINE_PG_HPP

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Headers //////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "../Driver.hpp"
#include "../Engine.hpp"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Crux Namespace ///////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace Crux
{
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// Crux::Provider Namespace /////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	namespace Provider
	{
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////
		/// Crux::Provider::Sql Namespace ////////////////////////////////////////////////////////////////////////////
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////

		namespace Sql
		{
			///////////////////////////////////////////////////////////////////////////////////////////////////////////
			/// Crux::Provider::Sql::Dialect Namespace ///////////////////////////////////////////////////////////////
			/////////////////////////////////////////////////////////////////////////////////////////////////////////

			namespace Dialect
			{
				///////////////////////////////////////////////////////////////////////////////////////////////////////
				/// Crux::Provider::Sql::Dialect::Pg Class Definition ////////////////////////////////////////////////
				/////////////////////////////////////////////////////////////////////////////////////////////////////

				class Pg : public Crux::Provider::Sql::Engine
				{
					///////////////////////////////////////////////////////////////////////////////////////////////////
					/// Qt Object Recognition ////////////////////////////////////////////////////////////////////////
					/////////////////////////////////////////////////////////////////////////////////////////////////

					Q_OBJECT

					///////////////////////////////////////////////////////////////////////////////////////////////////
					/// Public Methods & Properties //////////////////////////////////////////////////////////////////
					/////////////////////////////////////////////////////////////////////////////////////////////////

					public:

						///////////////////////////////////////////////////////////////////////////////////////////////
						/// Factory //////////////////////////////////////////////////////////////////////////////////
						/////////////////////////////////////////////////////////////////////////////////////////////

						/**
						 * @paragraph This method provides a fluid constructor for the provider
						 * @access public
						 * @name Crux::Provider::Sql::Dialect::Pg::Factory()
						 * @namespace Crux::Provider::Sql::Dialect
						 * @param QtCore/QString strName
						 * @param QtCore/QString strDatabase
						 * @param QtCore/QString strUsername
						 * @param QtCore/QString strPassword
						 * @param QtCore/QString strHost ["localhost"]
						 * @param int intPort [5432]
						 * @return Crux::Provider::Sql::Dialect::Pg*
						 * @static
						 */
						static Pg *Factory(QString strName, QString strDatabase, QString strUsername, QString strPassword, QString strHost = "localhost", int intPort = 5432);

						///////////////////////////////////////////////////////////////////////////////////////////////
						/// Constructor //////////////////////////////////////////////////////////////////////////////
						/////////////////////////////////////////////////////////////////////////////////////////////

						/**
						 * @paragraph This method instantiates a new PostgreSQL SQL Provider
						 * @access public
						 * @name Crux::Provider::Sql::Dialect::Pg::Pg()
						 * @namespace Crux::Provider::Sql::Dialect
						 * @param QtCore/QString strName
						 * @param QtCore/QString strDatabase
						 * @param QtCore/QString strUsername
						 * @param QtCore/QString strPassword
						 * @param QtCore/QString strHost ["localhost"]
						 * @param int intPort [5432]
						 * @return
						 */
						Pg(QString strName, QString strDatabase, QString strUsername, QString strPassword, QString strHost = "localhost", int intPort = 5432);

						///////////////////////////////////////////////////////////////////////////////////////////////
						/// Implementations //////////////////////////////////////////////////////////////////////////
						/////////////////////////////////////////////////////////////////////////////////////////////

						/**
						 * @paragraph This method is responsible for describing a table in the database
						 * @access public
						 * @name Crux::Provider::Sql::My::describe()
						 * @namespace Crux::Provider::Sql::Dialect
						 * @param QtCore/QString strTable
						 * @param QtCore/QString strSchema ["public"]
						 * @return QtCore/QMap<QtCore/QString, QtCore/QVector<QtCore/QString>>
						 */
						virtual QMap<QString, QVector<QString>> describe(QString strTable, QString strSchema = "public");

						/**
						 * @paragraph This method escapes a column's name for a SQL statement
						 * @access public
						 * @name Crux::Provider::Sql::Dialect::Pg::escapeColumn()
						 * @param QtCore/QString strColumn
						 * @return QtCore/QString
						 */
						virtual QString escapeColumn(QString strColumn);

						/**
						 * @paragraph This method escapes the table name for a SQL statement
						 * @access public
						 * @name Crux::Provider::Sql::Dialect::Pg::escapeTable()
						 * @namespace Crux::Provider::Sql::Dialect
						 * @param QtCore/QString strTable
						 * @return QtCore/QString
						 */
						virtual QString escapeTable(QString strTable);

						/**
						 * @paragraph This method escapes value for a SQL statement
						 * @access public
						 * @name Crux::Provider::Sql::Dialect::Pg::escapeValue()
						 * @namespace Crux::Provider::Sql::Dialect
						 * @param QtCore/QVariant varValue
						 * @return QtCore/QString
						 */
						virtual QString escapeValue(QVariant varValue);

				///////////////////////////////////////////////////////////////////////////////////////////////////////
				}; /// End Crux::Provider::Sql::Dialect::Pg Class Definition /////////////////////////////////////////
				/////////////////////////////////////////////////////////////////////////////////////////////////////

			///////////////////////////////////////////////////////////////////////////////////////////////////////////
			} /// End Crux::Provider::Sql::Dialect Namespace /////////////////////////////////////////////////////////
			/////////////////////////////////////////////////////////////////////////////////////////////////////////

		///////////////////////////////////////////////////////////////////////////////////////////////////////////////
		} /// End Crux::Provider::Sql Namespace //////////////////////////////////////////////////////////////////////
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	} /// End Crux::Provider Namespace ///////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
} /// End Crux Namespace /////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#endif /// End Definitions ///////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
